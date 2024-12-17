## Welcome

To explore the usefulness of Tree-sitter, check out this [comprehensive blog post](https://derek.stride.host/posts/comprehensive-introduction-to-tree-sitter) and the official [repository](https://github.com/tree-sitter/tree-sitter).

Before getting started, make sure to read the [official documentation](https://tree-sitter.github.io/tree-sitter/).

### How to Contribute

1. Review the `grammar.js` file to understand its structure. Refer to the [parser creation guide](https://tree-sitter.github.io/tree-sitter/creating-parsers) for detailed instructions.

2. For every change made to `grammar.js`, ensure you add corresponding tests in the `test/corpus/` directory. See how to write tests by going through the [testing part of the docs](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

3. Look at how the parsers for [python](https://github.com/tree-sitter/tree-sitter-python/blob/master/grammar.js) and [lua](https://github.com/tjdevries/tree-sitter-lua/blob/master/grammar.js) are written, going through them is extremely helpful.
