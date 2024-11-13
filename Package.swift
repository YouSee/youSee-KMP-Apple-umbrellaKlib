// swift-tools-version: 5.10

import PackageDescription

let package = Package(
    name: "umbrellaKlib",
    products: [
        .library(
            name: "umbrellaKlib",
            targets: ["umbrellaKlib", "umbrellaKlibTarget"]),
    ],
    dependencies: [
        .package(url: "https://github.com/mixpanel/mixpanel-iphone", exact: "5.0.7"),
    ],
    targets: [
        .binaryTarget(name: "umbrellaKlib", path: "umbrellaKlib.xcframework"),
        .target(
            name: "umbrellaKlibTarget",
            dependencies: [
                .target(name: "umbrellaKlib"),
                .product(name: "Mixpanel", package: "mixpanel-iphone"),
            ],
            path: "Sources/umbrellaKlib"
        )
    ]
)