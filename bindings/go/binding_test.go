package tree_sitter_zoomba_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_zoomba "gitlab.com/non.est.sacra/zoomba/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_zoomba.Language())
	if language == nil {
		t.Errorf("Error loading Zoomba grammar")
	}
}
