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

  conflicts: ($) => [
    [$.return_statement],
    [$.function, $._expression],
    [$._expression, $.method_calling],
    [$.function_calling, $.method_calling],
    [$._expression, $.function_calling, $.method_calling],
    [$.method_calling],
  ],

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

    parenthesis_included_params: ($) =>
      seq(
        "(",
        optional($._expression),
        optional(repeat(seq(",", $._expression))),
        ")",
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
        $.assignment_statement,
      ),

    assignment_statement: ($) =>
      seq(choice($.identifier, $.tuple_lhs), "=", $._expression),

    tuple_lhs: ($) => seq("#", $.parenthesis_included_params),

    import_statement: ($) =>
      prec(1, seq("import", $.import_identifier, "as", $.identifier)),

    import_identifier: ($) =>
      seq($.identifier, optional(repeat(seq(".", $.identifier)))),

    print_statement: ($) =>
      choice(
        seq("println", $.parenthesis_included_params),
        seq("printf", $.parenthesis_included_params),
      ),

    _expression: ($) =>
      choice(
        $.binary_operators,
        $.comparison_operators,
        $.compound_operators,
        $.identifier,
        $.string,
        $.number,
        $.dict,
        $.list,
        $.implicit_arguments,
        $.function_calling,
        $.function_definition,
        $.method_calling,
        seq("(", optional($._expression), ")"),
      ),

    list: ($) =>
      seq(
        "[",
        optional($._expression),
        optional(repeat(seq(",", $._expression))),
        "]",
      ),

    dict: ($) =>
      seq(
        "{",
        optional(
          seq($.key_value_pair, optional(repeat(seq(",", $.key_value_pair)))),
        ),
        "}",
      ),

    key_value_pair: ($) =>
      seq(optional($._expression), ":", optional($._expression)),

    assert_panic_statement: ($) =>
      choice(
        seq("assert", $.parenthesis_included_params),
        seq("panic", $.parenthesis_included_params),
      ),

    return_statement: ($) => seq("return", optional($._expression)),

    break_statement: ($) => "break",

    _compound_statement: ($) =>
      choice($.if_statement, $.for_statement, $.while_statement, $.function),

    if_statement: ($) =>
      seq("if", $.parenthesis_included_params, $.function_body),

    for_statement: ($) =>
      seq("for", $.parenthesis_included_params, $.function_body),

    while_statement: ($) =>
      seq("while", $.parenthesis_included_params, $.function_body),

    function: ($) => choice($.function_definition, $.function_calling),

    function_definition: ($) =>
      seq(
        "def",
        optional($.identifier),
        $.parenthesis_included_params,
        optional(choice("as", "where", "->")),
        $.function_body,
      ),

    function_calling: ($) => seq($.identifier, $.parenthesis_included_params),

    // Object.strip().split(".")
    method_calling: ($) =>
      seq(
        choice($.identifier, seq($.identifier, $.parenthesis_included_params)),
        optional(seq(".", $.method_calling)),
      ),

    implicit_arguments: ($) =>
      choice(
        choice("$.o", "$.item"),
        choice("$.i", "$.index"),
        choice("$.c", "$.context"),
        choice("$.p", "$.partial"),
      ),

    binary_operators: ($) =>
      prec.left(
        choice(
          seq($._expression, "+", $._expression),
          seq($._expression, "-", $._expression),
          seq($._expression, "*", $._expression),
          seq($._expression, "/", $._expression),
          seq($._expression, "**", $._expression),
        ),
      ),

    comparison_operators: ($) =>
      prec.left(
        choice(
          seq($._expression, "<", $._expression),
          seq($._expression, ">", $._expression),
          seq($._expression, "<=", $._expression),
          seq($._expression, ">=", $._expression),
          seq($._expression, "==", $._expression),
          seq($._expression, "!=", $._expression),
          seq($._expression, "!", $._expression),
        ),
      ),

    compound_operators: ($) =>
      prec.left(
        choice(
          seq($._expression, "+=", $._expression),
          seq($._expression, "-=", $._expression),
          seq($._expression, "*=", $._expression),
          seq($._expression, "/=", $._expression),
          seq($._expression, "**=", $._expression),
          seq($._expression, "%=", $._expression),
        ),
      ),

    function_body: ($) => seq("{", repeat($._statement), "}"),
  },
});
