import XCTest
import SwiftTreeSitter
import TreeSitterColors

final class TreeSitterColorsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_colors())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Colors grammar")
    }
}
