// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterZoomba",
    products: [
        .library(name: "TreeSitterZoomba", targets: ["TreeSitterZoomba"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterZoomba",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterZoombaTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterZoomba",
            ],
            path: "bindings/swift/TreeSitterZoombaTests"
        )
    ],
    cLanguageStandard: .c11
)
