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
      $.pipe_expression
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
      $.pipe_expression
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
        $.channel_of
      )
    ),

    channel_from: $ => seq(
      'from',
      '(',
      seq($._expression, repeat(seq(',', $._expression))),
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
      optional(seq($._expression, repeat(seq(',', $._expression)))),
      ')'
    ),

    // Pipeline operations
    pipe_expression: $ => prec.left(1, seq(
      $._expression,
      '|',
      choice(
        $.identifier,
        seq(
          'map',
          '{',
          $.map_body,
          '}'
        )
      )
    )),

    map_body: $ => seq(
      'it',
      '*',
      $._expression
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
