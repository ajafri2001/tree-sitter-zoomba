/**
 * @file Micro-Programming Language
 * @author Abdullah Arif Jafri <abdullahjafri2001@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "zoomba",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
