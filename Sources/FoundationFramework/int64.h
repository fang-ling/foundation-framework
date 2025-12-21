//
//  int64.h
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

#ifndef int64_h
#define int64_h

/**
 * A 64-bit signed integer value type.
 */
typedef long long Foundation_Int64;

/**
 * A 64-bit unsigned integer value type.
 */
typedef unsigned long long Foundation_UInt64;

/* MARK: - Common Arithmetic Operations */

/**
 * Returns the absolute value of the given number.
 *
 * The absolute value of x must be representable in the same type. In
 * particular, the absolute value of a signed, fixed-width integer type’s
 * minimum cannot be represented.
 *
 *     Foundation_Int64 x = Foundation_Int64_MakeAbsolute(-(1LL << 63));
 *     // Results in undefined behavior
 *
 * - Parameter x: A signed number.
 *
 * - Returns: The absolute value of x.
 */
Foundation_Int64 Foundation_Int64_MakeAbsolute(Foundation_Int64 x);

#endif /* int64_h */
