package tree_sitter_nextflow_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nextflow "github.com/edmundmiller/tree-sitter-nextflow/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nextflow.Language())
	if language == nil {
		t.Errorf("Error loading Nextflow grammar")
	}
}
