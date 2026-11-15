/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  FoundationURLSession.h
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

#ifndef FOUNDATION_URL_SESSION_H
#define FOUNDATION_URL_SESSION_H

#import <CFramework/CFramework.h>

#if C_TARGET_OS_APPLE

#import <Foundation/Foundation.h>

/**
 * An object that coordinates a group of related, network data transfer tasks.
 *
 * ## Topics
 *
 * ### Adding data tasks to a session
 *
 * - ``FoundationURLSessionDataTask``
 */
@compatibility_alias FoundationURLSession NSURLSession;

#endif

#endif
