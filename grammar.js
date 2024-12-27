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
      $.parameter
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
      $.boolean
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
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
