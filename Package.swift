// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterColors",
    products: [
        .library(name: "TreeSitterColors", targets: ["TreeSitterColors"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterColors",
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
            name: "TreeSitterColorsTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterColors",
            ],
            path: "bindings/swift/TreeSitterColorsTests"
        )
    ],
    cLanguageStandard: .c11
)
