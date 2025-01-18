/**
 * @file Colors grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "colors",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => "hello",
  },
});
