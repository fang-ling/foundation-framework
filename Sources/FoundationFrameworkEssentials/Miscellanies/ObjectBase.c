//
//  ObjectBase.c
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

#include "ObjectBase.h"

#include "Base.h"

void
Foundation_ObjectBase_Retain(const struct Foundation_ObjectBase* objectBase) {
  let mutableObjectBase = (struct Foundation_ObjectBase*)objectBase;
  __atomic_fetch_add(&mutableObjectBase->retainCount, 1, __ATOMIC_RELAXED);
}

Foundation_Boolean
Foundation_ObjectBase_Release(const struct Foundation_ObjectBase* objectBase) {
  let mutableObjectBase = (struct Foundation_ObjectBase*)objectBase;
  let oldCount = __atomic_fetch_sub(&mutableObjectBase->retainCount,
                                    1,
                                    __ATOMIC_RELEASE);

  if (oldCount == 1) {
    __atomic_thread_fence(__ATOMIC_ACQUIRE);

    return true;
  }

  return false;
}
