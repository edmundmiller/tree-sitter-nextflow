/**
 * @file A parser for Nextflow from scratch
 * @author Edmund Miller <edmund@nf-co.re>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nextflow",

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.comment,
      $.shebang,
      $.feature_flag,
      $.include,
      $.parameter,
      $.process_definition,
      $.channel_expression,
      $.pipe_expression,
      $.workflow_definition
    )),

    // Comments
    comment: $ => choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ),

    // Top-level declarations
    shebang: $ => seq(
      '#!',
      /.*/
    ),

    feature_flag: $ => seq(
      'nextflow',
      '.',
      $.identifier,
      '.',
      $.identifier,
      '=',
      choice($.number, $.string, $.boolean)
    ),

    include: $ => seq(
      'include',
      '{',
      commaSep1($.include_item),
      '}',
      'from',
      $.string
    ),

    include_item: $ => seq(
      $.identifier,
      optional(seq('as', $.identifier))
    ),

    parameter: $ => seq(
      'params',
      '.',
      $.identifier,
      '=',
      $._expression
    ),

    // Basic expressions
    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.channel_expression,
      $.pipe_expression,
      $.map,
      $.list
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    
    number: $ => choice(
      /\d+/,
      /\d+\.\d+/
    ),

    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'"),
      seq('"""', /[^"]*/, '"""'),
      seq("'''", /[^']*/, "'''")
    ),

    boolean: $ => choice('true', 'false'),

    // Helper functions
    _block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.expression_statement,
      $.assignment_statement
    ),

    expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    assignment_statement: $ => seq(
      $.identifier,
      '=',
      $._expression,
      ';'
    ),

    // Process definition
    process_definition: $ => seq(
      'process',
      $.identifier,
      '{',
      repeat(choice(
        $.input_block,
        $.output_block,
        $.script_block,
        $.directive_block
      )),
      '}'
    ),

    input_block: $ => seq(
      'input:',
      repeat($.input_declaration)
    ),

    input_declaration: $ => seq(
      choice('val', 'path', 'tuple', 'env', 'stdin'),
      $.identifier,
      optional(seq('from', $._expression)),
      ';'
    ),

    output_block: $ => seq(
      'output:',
      repeat($.output_declaration)
    ),

    output_declaration: $ => seq(
      choice('path', 'tuple', 'env', 'stdout'),
      $._expression,
      optional(seq('into', $._expression)),
      ';'
    ),

    script_block: $ => seq(
      choice('script:', 'shell:', 'exec:'),
      $.script_content
    ),

    script_content: $ => choice(
      seq('"""', /([^"]|"[^"]|""[^"])*/, '"""'),
      seq("'''", /([^']|'[^']|''[^'])*/, "'''"),
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),

    directive_block: $ => seq(
      'directive:',
      repeat($.directive)
    ),

    directive: $ => seq(
      $.identifier,
      $._expression,
      ';'
    ),

    // Channel operations
    channel_expression: $ => seq(
      'Channel',
      '.',
      choice(
        $.channel_from,
        $.channel_value,
        $.channel_of,
        $.channel_from_list
      )
    ),

    channel_from: $ => seq(
      'from',
      '(',
      commaSep1($._expression),
      ')'
    ),

    channel_value: $ => seq(
      'value',
      '(',
      optional($._expression),
      ')'
    ),

    channel_of: $ => seq(
      'of',
      '(',
      optional(commaSep1($._expression)),
      ')'
    ),

    channel_from_list: $ => seq(
      'fromList',
      '(',
      $.list,
      ')'
    ),

    list: $ => seq(
      '[',
      optional(commaSep1($._expression)),
      ']'
    ),

    map: $ => seq(
      '[',
      commaSep1($.map_entry),
      ']'
    ),

    map_entry: $ => seq(
      choice(
        $.identifier,
        $.string,
        $.number
      ),
      ':',
      $._expression
    ),

    // Pipeline operations
    pipe_expression: $ => prec.left(1, seq(
      $._expression,
      '|',
      choice(
        $.identifier,
        $.map_operation
      )
    )),

    map_operation: $ => seq(
      'map',
      $.closure
    ),

    closure: $ => seq(
      '{',
      $.identifier,
      '*',
      $._expression,
      '}'
    ),

    // Workflow definition
    workflow_definition: $ => seq(
      'workflow',
      '{',
      optional($.workflow_body),
      '}'
    ),

    workflow_body: $ => choice(
      seq($.workflow_input, optional($.workflow_main), optional($.workflow_emit)),
      seq($.workflow_main, optional($.workflow_emit)),
      $.workflow_emit,
      repeat1($._workflow_statement)
    ),

    workflow_input: $ => prec.right(2, seq(
      'take:',
      repeat1(seq(
        $.identifier,
        optional(';')
      ))
    )),

    workflow_main: $ => prec.right(2, seq(
      'main:',
      repeat1(seq(
        $._workflow_statement,
        optional(';')
      ))
    )),

    workflow_emit: $ => prec.right(2, seq(
      'emit:',
      repeat1(seq(
        $.identifier,
        '=',
        $._workflow_statement,
        optional(';')
      ))
    )),

    _workflow_statement: $ => choice(
      $._expression,
      $.process_invocation,
      $.process_output
    ),

    process_invocation: $ => seq(
      $.identifier,
      '(',
      optional(commaSep1(choice($._expression, $.process_output))),
      ')'
    ),

    process_output: $ => seq(
      $.identifier,
      '.',
      'out'
    ),

    binary_expression: $ => prec.left(1, seq(
      $._expression,
      '*',
      $._expression
    ))
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
