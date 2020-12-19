/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <zephyr/types.h>

#define HID_USAGE_PACK(usage) (HID_USAGE(usage.page, usage.id))

struct hid_usage {
    uint16_t page;
    uint16_t id;
};

uint32_t hid_usage_pack(struct hid_usage usage);