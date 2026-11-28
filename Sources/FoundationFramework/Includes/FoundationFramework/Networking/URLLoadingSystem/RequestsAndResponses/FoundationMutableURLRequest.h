/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  FoundationMutableURLRequest.h
 *  foundation-framework
 *
 *  Created by Fang Ling on 2026/11/28.
 *
 *  This source file is part of the FoundationFramework open source project
 *
 *  Copyright (c) 2025-2026 Fang Ling <fangling@fangl.ing>
 *  Licensed under Apache License v2.0
 *
 *  See LICENSE for license information
 *
 *  SPDX-License-Identifier: Apache-2.0
 *
 *===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*/

#ifndef FOUNDATION_MUTABLE_URL_REQUEST_H
#define FOUNDATION_MUTABLE_URL_REQUEST_H

#import <CFramework/CFramework.h>

#if C_TARGET_OS_APPLE

#import <Foundation/Foundation.h>

#endif

C_ASSUME_NONNULL_BEGIN

#if C_TARGET_OS_APPLE

@compatibility_alias FoundationMutableURLRequest NSMutableURLRequest;

#endif

C_ASSUME_NONNULL_END

#endif
