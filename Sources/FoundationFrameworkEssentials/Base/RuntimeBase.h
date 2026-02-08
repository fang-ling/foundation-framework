//
//  RuntimeBase.h
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

#ifndef RuntimeBase_h
#define RuntimeBase_h

#include "../Numerics/Boole.h"
#include "../Numerics/Integer32.h"

struct Foundation_RuntimeBase {
  Foundation_UnsignedInteger32 retainCount;
};

void Foundation_RuntimeBase_Retain(struct Foundation_RuntimeBase* runtime);

Foundation_Boole
Foundation_RuntimeBase_Release(struct Foundation_RuntimeBase* runtime);

#endif /* RuntimeBase_h */
