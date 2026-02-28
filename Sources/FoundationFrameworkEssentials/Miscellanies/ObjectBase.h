//
//  ObjectBase.h
//  foundation-framework
//
//  Created by Fang Ling on 2026/1/26.
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

#ifndef ObjectBase_h
#define ObjectBase_h

#include "../Numerics/BinaryLogic.h"
#include "../Numerics/Integer64.h"

/**
 * The runtime information of an object.
 *
 * The life span of an object is determined by its reference count. When you
 * create or copy an object, its reference count is set to 1. Subsequent clients
 * can claim ownership of the object by calling
 * ``Foundation_ObjectBase_Retain`` which increments the reference count. Later,
 * when you have no more use for the object, you call
 * ``Foundation_ObjectBase_Release``. When the reference count reaches 0, the
 * object's memory can be deallocated.
 *
 * ## Topics
 *
 * ### Memory Management
 *
 * - ``Foundation_ObjectBase_Retain``
 * - ``Foundation_ObjectBase_Release``
 */
struct Foundation_ObjectBase {
  /**
   * The count of the number of clients who want this object to persist.
   */
  Foundation_UnsignedInteger64 retainCount;
};

/**
 * Retains an object.
 *
 * You should retain an object when you receive it from elsewhere (that is, you
 * did not create or copy it) and you want it to persist. If you retain an
 * object you are responsible for releasing it.
 *
 * - Parameter objectBase: The object to retain. This value must not be `NULL`.
 */
void
Foundation_ObjectBase_Retain(const struct Foundation_ObjectBase* objectBase);

/**
 * Releases an object.
 *
 * If the retain count of `objectBase` becomes zero the memory allocated to the
 * object can be deallocated and the object can be destroyed. If you create,
 * copy, or explicitly retain (see the ``Foundation_ObjectBase_Retain``
 * function) an object, you are responsible for releasing it when you no longer
 * need it.
 *
 * - Parameter objectBase: An object to release. This value must not be `NULL`.
 *
 * - Returns: A Boolean value indicating whether the object is eligible to be
 *   deallocated and destroyed.
 */
Foundation_BinaryLogic
Foundation_ObjectBase_Release(const struct Foundation_ObjectBase* objectBase);

#endif /* ObjectBase_h */
