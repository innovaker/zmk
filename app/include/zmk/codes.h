/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/codes.h>
#include <zmk/hid_usage.h>
#include <zephyr.h>

struct zmk_code {
    struct hid_usage usage;
    uint8_t modifiers;
};

struct zmk_code zmk_code_unpack(const uint32_t code);