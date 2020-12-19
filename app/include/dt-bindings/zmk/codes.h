/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define ZMK_CODE_PACK_MODIFIERS(modifiers) (((modifiers)&0xFF) << 24)
#define ZMK_CODE_UNPACK_MODIFIERS(code) ((code) >> 24)

#define ZMK_CODE_PACK_USAGE_PAGE(usage_page) (((usage_page)&0xFF) << 16)
#define ZMK_CODE_UNPACK_USAGE_PAGE(code) (((code) >> 16) & 0xFF)

#define ZMK_CODE_PACK_USAGE_ID(usage_id) (((usage_page)&0xFFFF))
#define ZMK_CODE_UNPACK_USAGE_ID(code) ((code)&0xFFFF)

#define ZMK_CODE_PACK_USAGE(usage)                                                                 \
    (ZMK_CODE_PACK_USAGE_PAGE(((usage)&0xFFFF) >> 16) | ZMK_CODE_PACK_USAGE_ID((usage)&0xFFFF))
