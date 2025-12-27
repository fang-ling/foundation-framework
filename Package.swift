// swift-tools-version: 6.2

//
//  Package.swift
//  foundation-framework
//
//  Created by Fang Ling on 2025/12/7.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

import PackageDescription

let package = Package(
  name: "foundation-framework",
  products: [
    .library(name: "FoundationFramework", targets: ["FoundationFramework"])
  ],
  dependencies: [
    .package(url: "https://github.com/apple/swift-numerics", from: "1.0.0")
  ],
  targets: [
    .target(name: "FoundationFramework"),
    .testTarget(
      name: "FoundationFrameworkTests",
      dependencies: [
        "FoundationFramework",
        .product(name: "Numerics", package: "swift-numerics")
      ]
    )
  ],
  cLanguageStandard: .c89
)
