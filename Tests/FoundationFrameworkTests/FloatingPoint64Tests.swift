//
//  FloatingPoint64Tests.swift
//  foundation-framework
//
//  Created by Fang Ling on 2025/12/27.
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

@testable import FoundationFramework
import RealModule
import Testing

@Suite("FloatingPoint64Tests")
struct FloatingPoint64Tests {
  @Test func testSquareNumber() {
    #expect(Foundation_FloatingPoint64_TakeSquareRoot(374732164) == 19358)
  }

  @Test func testZero() {
    #expect(Foundation_FloatingPoint64_TakeSquareRoot(0) == 0)
  }

  @Test func testNonSquareNumber() {
    let squareRoot = Foundation_FloatingPoint64_TakeSquareRoot(12333)
    #expect(squareRoot.isApproximatelyEqual(to: 111.054040899))
  }
}
