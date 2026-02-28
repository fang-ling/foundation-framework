//
//  BinaryLogic.h
//  foundation-framework
//
//  Created by Fang Ling on 2026/1/2.
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

#ifndef BinaryLogic_h
#define BinaryLogic_h

#include <stdbool.h>

#include "../Miscellanies/Base.h"

/**
 * A value type whose instances are either `true` or `false`.
 *
 * `Foundation_BinaryLogic` represents Boolean values. Create instances of
 * `Foundation_BinaryLogic` by using one of the Boolean literals `true` or
 * `false`, or by assigning the result of a Boolean method or operation to a
 * variable or constant.
 *
 * ```c
 * let hasArrived = false;
 *
 * let isLess = 100 < 101;
 * // isLess == "true"
 * ```
 *
 * It's recommended to use only simple Boolean values in conditional contexts to
 * help avoid accidental programming errors and to help maintain the clarity of
 * each control statement.
 */
typedef bool Foundation_BinaryLogic SWIFT_NAME(BinaryLogic);

#endif /* BinaryLogic_h */
