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
  /// Returns the cosine of the value.
  ///
  /// The value will be interpreted as an angle measured in radians.
  ///
  /// - Parameter value: A floating-point number.
  ///
  /// - Returns: The cosine of the value.
  public static func calculateCosine(
    _ value: FloatingPoint64
  ) -> FloatingPoint64 {
    return Foundation_FloatingPoint64_CalculateCosine(value)
  }

  /// Returns the sine of the value.
  ///
  /// The value will be interpreted as an angle measured in radians.
  ///
  /// - Parameter value: A floating-point number.
  ///
  /// - Returns: The sine of the value.
  public static func calculateSine(
    _ value: FloatingPoint64
  ) -> FloatingPoint64 {
    return Foundation_FloatingPoint64_CalculateSine(value)
  }
}
