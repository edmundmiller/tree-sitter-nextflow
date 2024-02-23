module.exports = grammar({
    name: "Nextflow",

    rules: {
        source_file: ($) => repeat($._definition),

        _definition: ($) =>
            choice(
                $.function_definition,
                // TODO: other kinds of definitions
            ),

        function_definition: ($) =>
            seq("func", $.identifier, $.parameter_list, $._type, $.block),

        parameter_list: ($) =>
            seq(
                "(",
                // TODO: parameters
                ")",
            ),

        _type: ($) =>
            choice(
                "bool",
                // TODO: other kinds of types
            ),

        block: ($) => seq("{", repeat($._statement), "}"),

        _statement: ($) =>
            choice(
                $.return_statement,
                // TODO: other kinds of statements
            ),

        return_statement: ($) => seq("return", $._expression, ";"),

        _expression: ($) =>
            choice(
                $.identifier,
                $.number,
                // TODO: other kinds of expressions
            ),

        identifier: ($) => /[a-z]+/,

        number: ($) => /\d+/,
    },
});
