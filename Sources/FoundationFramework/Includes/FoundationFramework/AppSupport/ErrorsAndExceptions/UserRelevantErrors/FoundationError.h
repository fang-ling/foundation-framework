/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  FoundationError.h
 *  foundation-framework
 *
 *  Created by Fang Ling on 2026/11/7.
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

#ifndef FOUNDATION_ERROR_H
#define FOUNDATION_ERROR_H

#import <CFramework/CFramework.h>

#if C_TARGET_OS_APPLE

#import <Foundation/Foundation.h>

/**
 * Information about an error condition including a domain, a domain-specific error code, and application-specific information.
 *
 * ## Topics
 *
 * ### Providing Error User Info
 *
 * - ``FoundationErrorUserInfoKey``
 *
 * ### Supporting Types
 *
 * - ``FoundationErrorDomain``
 */
typedef NSError FoundationError;

/**
 * These keys may exist in the user info dictionary.
 *
 * ## Topics
 *
 * ### Constants
 *
 * - ``FoundationLocalizedDescriptionKey-macro``
 */
typedef NSErrorUserInfoKey FoundationErrorUserInfoKey;

#define FoundationLocalizedDescriptionKey NSLocalizedDescriptionKey

/**
 * The error domain.
 */
typedef NSErrorDomain FoundationErrorDomain;

#endif

#endif
