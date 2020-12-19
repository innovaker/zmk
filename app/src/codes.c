/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zmk/codes.h>

struct zmk_code zmk_code_unpack(const uint32_t code) {
    return (struct zmk_code){
        .modifiers = ZMK_CODE_UNPACK_MODIFIERS(code),
        .usage = {.page = ZMK_CODE_UNPACK_USAGE_PAGE(code), .id = ZMK_CODE_UNPACK_USAGE_ID(code)}};
}