import XCTest
import SwiftTreeSitter
import TreeSitterZoomba

final class TreeSitterZoombaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_zoomba())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Zoomba grammar")
    }
}
