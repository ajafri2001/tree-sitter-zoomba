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

  extras: ($) => [$.comment, /\s/], // Including whitespace

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._statement),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) =>
      choice(
        seq("//", /[^\n]*/), // REGEX for Simple comments
        seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"), // REGEX for Multi-line comments
      ),

    _statement: ($) =>
      choice(
        $._statement_definition,
        $._function_definition,
        // Other types of statements which are at top level!
      ),

    _statement_definition: ($) => choice($._simple_statements),

    // Just returning an identifier for now
    _function_definition: ($) =>
      seq(
        "def",
        $.identifier,
        "(",
        optional($.function_params),
        ")",
        "{",
        $.return_statement,
        "}",
      ),

    function_params: ($) => seq($.parameter, repeat(seq(",", $.parameter))),

    parameter: ($) =>
      choice($.identifier, seq($.identifier, "=", $.identifier)),

    return_statement: ($) => seq("return", $.identifier),

    _simple_statements: ($) => choice($.print_statement),

    /*
     * For now below <print_statement> is Okay IMO
     */

    print_statement: ($) =>
      seq(
        "println",
        "(",
        "'", // Single quote only for now
        /[^']*/, // match everything inside for testing
        "'",
        ")",
      ),
    // TODO: have to start generalizing the language and start thinking about the tree structure
  },
});
