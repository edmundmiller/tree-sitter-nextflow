import XCTest
import SwiftTreeSitter
import TreeSitterNextflow

final class TreeSitterNextflowTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nextflow())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Nextflow grammar")
    }
}
