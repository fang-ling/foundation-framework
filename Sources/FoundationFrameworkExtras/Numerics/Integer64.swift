//
//  Integer64.swift
//  foundation-framework
//
//  Created by Fang Ling on 2026/2/10.
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

import FoundationFrameworkEssentials

public typealias Integer64 = Foundation_Integer64
public typealias UnsignedInteger64 = Foundation_UnsignedInteger64

/* MARK: - Finding the Sign and Magnitude */
extension Integer64 {
  public func makeAbsolute() -> Self {
    return Foundation_Integer64_MakeAbsolute(self)
  }
}

/* MARK: - Choosing the Smallest and Largest Value */
extension Integer64 {
  public static func findMinimum(_ x: Self, _ y: Self) -> Self {
    return Foundation_Integer64_FindMinimum(x, y)
  }

  public static func findMaximum(_ x: Self, _ y: Self) -> Self {
    return Foundation_Integer64_FindMaximum(x, y)
  }
}
