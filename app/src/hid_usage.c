/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zmk/hid_usage.h>

uint32_t hid_usage_pack(struct hid_usage usage) { return HID_USAGE(usage.page, usage.id); }