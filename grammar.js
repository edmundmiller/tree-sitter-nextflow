/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "Nextflow",

    word: ($) => $.identifier,

    extras: ($) => [$.line_comment, $.block_comment, /\s/],

    rules: {
        config_file: ($) =>
            repeat(choice($.assignment, $.include, $.scope_block)),

        assignment: ($) =>
            seq(
                optional(repeat1(seq(field("scope", $.identifier), "."))),
                field("name", $.identifier),
                "=",
                field("value", $.literal),
            ),

        include: ($) => seq("includeConfig", $.string_literal),

        scope_block: ($) =>
            seq(
                optional(repeat1(seq(field("scope", $.identifier), "."))),
                field("scope", $.identifier),
                "{",
                repeat(choice($.scope_block, $.assignment)),
                "}",
            ),

        literal: ($) =>
            choice(
                $.string_literal,
                $.boolean_literal,
                $.numeric_literal,
                $.null_literal,
            ),

        string_literal: ($) =>
            choice($.string_literal_single, $.string_literal_double),

        string_literal_single: ($) =>
            seq("'", repeat($.string_literal_fragment_single), "'"),

        string_literal_double: ($) =>
            seq('"', repeat($.string_literal_fragment_double), '"'),

        string_literal_fragment_single: ($) =>
            token.immediate(prec(1, /[^'\\\n]+/)),

        string_literal_fragment_double: ($) =>
            token.immediate(prec(1, /[^"\\\n]+/)),

        null_literal: ($) => "null",

        boolean_literal: ($) => choice("true", "false"),

        numeric_literal: ($) => choice($.integer_literal, $.real_literal),

        integer_literal: (_) => /[0-9]+/,

        real_literal: (_) => /[0-9]+\.[0-9]+/,

        identifier: (_) => /[A-Za-z_][A-Za-z0-9_]*/,

        comment: ($) => choice($.line_comment, $.block_comment),

        line_comment: ($) => token(prec(0, seq("//", /[^\n]*/))),

        block_comment: ($) =>
            token(prec(0, seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),
    },
});
