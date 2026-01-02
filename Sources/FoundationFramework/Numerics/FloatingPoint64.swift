//
//  File.swift
//  foundation-framework
//
//  Created by Fang Ling on 2026/1/1.
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

import CFoundationFramework

public typealias FloatingPoint64 = Double

extension FloatingPoint64 {
  /* MARK: - Numeric Constants */

  /// The mathematical constant pi (π), approximately equal to 3.14159.
  public static var π: Self { Foundation_FloatingPoint64_Pi }

  /* MARK: - Common Floating-Point Operations */

  /// Returns a Boolean value that indicates whether two values are equal within
  /// a specified tolerance.
  ///
  /// - Parameters:
  ///   - other: The right-hand side value.
  ///   - tolerance: A double-precision value that specifies the tolerance.
  ///
  /// - Returns: A Boolean value that indicates whether two values are equal
  ///   within a specified tolerance.
  public func checkEquality(to other: Self, tolerance: Self) -> Boolean {
    return Foundation_FloatingPoint64_CheckEquality(self, other, tolerance)
  }

  /// Returns the absolute value of this number.
  ///
  /// - Returns: The absolute value of this number.
  public func makeAbsolute() -> Self {
    return Foundation_FloatingPoint64_MakeAbsolute(self)
  }

  /* MARK: - Elementary Functions */

  /// Returns the cosine of this number.
  ///
  /// The value will be interpreted as an angle measured in radians.
  ///
  /// - Returns: The cosine of this number.
  public func calculateCosine() -> Self {
    return Foundation_FloatingPoint64_CalculateCosine(self)
  }

  /// Returns the sine of this number.
  ///
  /// The value will be interpreted as an angle measured in radians.
  ///
  /// - Returns: The sine of this number.
  public func calculateSine() -> Self {
    return Foundation_FloatingPoint64_CalculateSine(self)
  }
}
