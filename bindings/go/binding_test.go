package tree_sitter_colors_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_colors "github.com/tree-sitter/tree-sitter-colors/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_colors.Language())
	if language == nil {
		t.Errorf("Error loading Colors grammar")
	}
}
