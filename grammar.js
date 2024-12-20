/**
 * @file Micro-Programming Language
 * @author Abdullah Arif Jafri <abdullahjafri2001@gmail.com>
 * @author Nabarun Mondal <non.est.sacra@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "zoomba",

  extras: ($) => [$.comment, /\s/], // Includes whitespace and comments

  rules: {
    source_file: ($) => repeat($._statement),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
    string: ($) => choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')),

    comment: ($) =>
      choice(
        seq("//", /[^\n]*/), // Single-line comments
        seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"), // Multi-line comments
      ),

    _statement: ($) => choice($._simple_statement, $._compound_statement),

    _simple_statement: ($) =>
      choice(
        $.import_statement,
        $.print_statement,
        $._expression,
        $.assert_panic_statement,
        $.return_statement,
        $.break_statement,
      ),

    import_statement: ($) => seq("import", $.string, "as", $.identifier),

    print_statement: ($) =>
      choice(
        seq("println", $.parenthesis_included_params),
        seq("printf", $.parenthesis_included_params),
      ),

    assert_panic_statement: ($) =>
      choice(
        seq("assert", $.parenthesis_included_params),
        seq("panic", $.parenthesis_included_params),
      ),

    return_statement: ($) =>
      seq("return", choice($._simple_statement, $._expression)),

    break_statement: ($) => "break",

    _compound_statement: ($) =>
      choice(
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $.function_definition,
      ),

    if_statement: ($) =>
      seq("if", $.parenthesis_included_params, optional($.function_body)),

    _assignment_definition: ($) =>
      seq($.left_hand_side, "=", $.right_hand_side),

    left_hand_side: ($) => choice($.identifier, $.hash_like_function),

    right_hand_side: ($) =>
      choice($._simple_statement, $._expression, $.function_definition),

    hash_like_function: ($) => seq("#", "(", $.parameters, ")"),

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.identifier,
        $.string,
        $.number,
        seq("(", optional($._expression), ")"),
      ),

    binary_expression: ($) =>
      prec.left(
        choice(
          seq($._expression, "+", $._expression),
          seq($._expression, "-", $._expression),
          seq($._expression, "*", $._expression),
          seq($._expression, "/", $._expression),
        ),
      ),

    function_definition: ($) =>
      seq(
        "def",
        $.identifier,
        "(",
        optional($.parameters),
        ")",
        $.function_body,
      ),

    parameters: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    function_body: ($) => seq("{", repeat($._statement), "}"),
  },
});
