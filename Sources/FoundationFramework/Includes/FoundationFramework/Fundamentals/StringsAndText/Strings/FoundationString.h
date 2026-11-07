/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  FoundationString.h
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

#ifndef FOUNDATION_STRING_H
#define FOUNDATION_STRING_H

#import <FoundationFramework/FoundationAvailability.h>

#import <CFramework/CFramework.h>

/**
 * The following constants are provided by ``FoundationString`` as possible string encodings.
 *
 * These values represent the various character encodings supported by the ``FoundationString`` classes. This is an incomplete list.
 *
 * ## Topics
 *
 * ### Constants
 *
 * - ``FoundationUTF8StringEncoding``
 */
typedef CUnsignedInteger FoundationStringEncoding; /* TODO: Match CF. */
FOUNDATION_ENUM(FoundationStringEncoding) {
  /**
   * An 8-bit representation of Unicode characters, suitable for transmission or storage by ASCII-based systems.
   */
  FoundationUTF8StringEncoding =
#if !C_TARGET_OS_APPLE
    4
#else
    NSUTF8StringEncoding
#endif
};

#if C_TARGET_OS_APPLE

#import <Foundation/Foundation.h>

/**
 * A static, plain-text Unicode string object.
 *
 * ## Topics
 *
 * ### Working with Encodings
 *
 * - ``FoundationStringEncoding``
 */
typedef NSString FoundationString;

#endif

#endif
