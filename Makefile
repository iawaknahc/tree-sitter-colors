TS ?= tree-sitter

clean:
	$(RM) parser.so

# tree-sitter generate generates ./src/grammar.json from ./grammar.js
generate:
	$(TS) generate --abi 15

# tree-sitter test reads ./src/grammar.json
test: generate
	$(TS) test --show-fields --stat=all

# tree-sitter build reads ./src/grammar.json
build: generate
	$(TS) build -o parser.so

.PHONY: clean test generate build
