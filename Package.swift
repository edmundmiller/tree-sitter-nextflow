// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterNextflow",
    products: [
        .library(name: "TreeSitterNextflow", targets: ["TreeSitterNextflow"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterNextflow",
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
            name: "TreeSitterNextflowTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterNextflow",
            ],
            path: "bindings/swift/TreeSitterNextflowTests"
        )
    ],
    cLanguageStandard: .c11
)
