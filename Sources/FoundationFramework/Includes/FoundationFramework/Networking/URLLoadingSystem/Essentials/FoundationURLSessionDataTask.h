/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  FoundationURLSessionDataTask.h
 *  foundation-framework
 *
 *  Created by Fang Ling on 2026/11/14.
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

#ifndef FOUNDATION_URL_SESSION_DATA_TASK_H
#define FOUNDATION_URL_SESSION_DATA_TASK_H

#import <CFramework/CFramework.h>

#if C_TARGET_OS_APPLE

#import <Foundation/Foundation.h>

/**
 * A URL session task that returns downloaded data directly to the app in memory.
 */
typedef NSURLSessionDataTask FoundationURLSessionDataTask;

#endif

#endif
