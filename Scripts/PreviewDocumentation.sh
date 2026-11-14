#!/bin/bash

##===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===##
##
##  PreviewDocumentation.sh
##  foundation-kit
##
##  Created by Fang Ling on 2026/3/7.
##
##  This file is part of the FoundationKit open source project
##
##  Copyright (c) 2025-2026 Fang Ling <fangling@fangl.ing>
##  Licensed under Apache License v2.0
##
##  See LICENSE for license information
##
##  SPDX-License-Identifier: Apache-2.0
##
##===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===##

set -eou pipefail

FOLDER_PREFIX=$([[ "$(uname -s)" == "Darwin" ]] && echo "/tmp" || echo "/dev/shm")
SYMBOLS_FOLDER=$FOLDER_PREFIX"/symbol-graphs"
OUTPUT_FOLDER=$FOLDER_PREFIX"/docc"
DOCC=$([[ "$(uname -s)" == "Darwin" ]] && echo "xcrun docc" || echo "docc")

FRAMEWORK_NAME="FoundationFramework"
HEADERS=(
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/Fundamentals/Collections/BasicCollections/FoundationArray.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/Fundamentals/Collections/BasicCollections/FoundationDictionary.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/Fundamentals/DatesAndTimes/DateRepresentations/FoundationTimeInterval.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/Fundamentals/StringsAndText/Strings/FoundationString.h
)

clang                                               \
    -extract-api                                    \
    --product-name=$FRAMEWORK_NAME                  \
    -o $SYMBOLS_FOLDER/$FRAMEWORK_NAME.symbols.json \
    -x objective-c-header                           \
    "${HEADERS[@]}"                                 \
    -ISources/$FRAMEWORK_NAME/Includes              \
    -I../c-framework/Sources/CFramework/Includes    \
    -I.

if [[ "$(uname -s)" == "Darwin" ]]; then
  $DOCC preview Sources/$FRAMEWORK_NAME/Documentation.docc -o $OUTPUT_FOLDER --additional-symbol-graph-dir $SYMBOLS_FOLDER
else
  $DOCC convert Sources/$FRAMEWORK_NAME/Documentation.docc -o $OUTPUT_FOLDER --additional-symbol-graph-dir $SYMBOLS_FOLDER

  echo "========================================"
  echo "Starting Local Preview Server"
  echo "    Address: http://"$(ip route get 1.1.1.1 | grep -oP '(?<=src\s)\d+(\.\d+){3}')"/documentation/foundationframework"
  echo "========================================"

  python3 -m http.server 80 --directory $OUTPUT_FOLDER
fi
