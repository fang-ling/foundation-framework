// swift-tools-version: 6.3

//===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===//
//
//  Package.swift
//  foundation-framework
//
//  Created by Fang Ling on 2025/12/7.
//
//  This source file is part of the FoundationFramework open source project
//
//  Copyright (c) 2025-2026 Fang Ling <fangling@fangl.ing>
//  Licensed under Apache License v2.0
//
//  See LICENSE for license information
//
//  SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===//

import PackageDescription

let package = Package(
  name: "foundation-framework",
  products: [
    .library(name: "FoundationFramework", targets: ["FoundationFramework"])
  ],
  dependencies: [
    .package(path: "../c-framework")
  ],
  targets: [
    .target(
      name: "FoundationFramework",
      dependencies: [
        .product(name: "CFramework", package: "c-framework")
      ],
      publicHeadersPath: "Includes"
    ),
    .testTarget(
      name: "FoundationFrameworkTests",
      dependencies: [
        "FoundationFramework"
      ]
    )
  ]
)
