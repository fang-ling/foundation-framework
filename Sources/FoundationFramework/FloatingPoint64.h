//
//  FloatingPoint64.h
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

#ifndef FloatingPoint64_h
#define FloatingPoint64_h

/**
 * A double-precision, floating-point value type.
 */
typedef double Foundation_FloatingPoint64;

/* MARK: - Common Floating-Point Operations */

/**
 * Returns the square root of the value, rounded to a representable value.
 *
 * The following example calculates the length of the hypotenuse of a right
 * triangle given its two perpendicular sides.
 *
 *     Foundation_FloatingPoint64_TakeSquareRoot distance =
 *       Foundation_FloatingPoint64_TakeSquareRoot(3.0 * 3.0 + 4.0 * 4.0);
 *     // distance == 5.0
 *
 * - Parameter value: A floating-point number.
 *
 * - Returns: The square root of the value.
 */
Foundation_FloatingPoint64
Foundation_FloatingPoint64_TakeSquareRoot(Foundation_FloatingPoint64 value);

#endif /* FloatingPoint64_h */
