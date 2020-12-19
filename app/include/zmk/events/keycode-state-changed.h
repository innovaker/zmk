/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/codes.h>
#include <zmk/event-manager.h>
#include <zmk/hid_usage.h>
#include <zmk/codes.h>
#include <zmk/keys.h>

struct keycode_state_changed {
    struct zmk_event_header header;
    struct hid_usage usage;
    uint8_t implicit_modifiers;
    bool state;
    int64_t timestamp;
};

ZMK_EVENT_DECLARE(keycode_state_changed);

static inline struct keycode_state_changed *
keycode_state_changed_from_encoded(uint32_t encoded, bool pressed, int64_t timestamp) {
    struct zmk_code code = zmk_code_unpack(encoded);

    if (!code.usage.page) {
        code.usage.page = HID_USAGE_KEY;
    }

    struct keycode_state_changed *ev = new_keycode_state_changed();
    ev->usage = code.usage;
    ev->implicit_modifiers = code.modifiers;
    ev->state = pressed;
    ev->timestamp = timestamp;
    return ev;
}
