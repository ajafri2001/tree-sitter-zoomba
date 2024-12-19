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

    _statement: ($) =>
      choice(
        $._simple_statement,
        $._expression,
        $.function_definition,
        $._assignment_definition,
      ),

    _assignment_definition: ($) =>
      seq($.left_hand_side, "=", $.right_hand_side),

    left_hand_side: ($) => choice($.identifier, $.hash_like_function),

    right_hand_side: ($) =>
      choice($._simple_statement, $._expression, $.function_definition),

    hash_like_function: ($) => seq("#", "(", $.parameters, ")"),

    _simple_statement: ($) => choice($.print_statement, $.return_statement),

    print_statement: ($) =>
      seq("println", "(", choice($.number, $.string), ")"),

    return_statement: ($) => seq("return", choice($.number, $.string)),

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.identifier,
        $.string,
        $.number,
        seq("(", $._expression, ")"),
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
