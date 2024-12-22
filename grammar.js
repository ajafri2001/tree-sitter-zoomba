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

  conflicts: ($) => [[$.function_calling, $._expression], [$.return_statement]],

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
      seq($._expression, optional(repeat(seq(",", $._expression)))),

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

    import_statement: ($) => seq("import", $.identifier, "as", $.identifier),

    print_statement: ($) =>
      choice(
        seq("println", $.parenthesis_included_params),
        seq("printf", $.parenthesis_included_params),
      ),

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.identifier,
        $.string,
        $.number,
        seq("(", optional($._expression), ")"),
      ),

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
      seq("if", $.parenthesis_included_params, optional($.function_body)),

    for_statement: ($) =>
      seq("for", $.parenthesis_included_params, optional($.function_body)),

    while_statement: ($) =>
      seq("while", $.parenthesis_included_params, optional($.function_body)),

    function: ($) => choice($.function_definition, $.function_calling),

    function_definition: ($) =>
      seq("def", $.identifier, $.parenthesis_included_params, $.function_body),

    function_calling: ($) => seq($.identifier, $.parenthesis_included_params),

    binary_expression: ($) =>
      prec.left(
        choice(
          seq($._expression, "+", $._expression),
          seq($._expression, "-", $._expression),
          seq($._expression, "*", $._expression),
          seq($._expression, "/", $._expression),
        ),
      ),

    function_body: ($) => seq("{", repeat($._statement), "}"),
  },
});
