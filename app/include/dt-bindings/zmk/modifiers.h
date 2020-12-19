/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/codes.h>

#define MOD_LCTL 0x01
#define MOD_LSFT 0x02
#define MOD_LALT 0x04
#define MOD_LGUI 0x08
#define MOD_RCTL 0x10
#define MOD_RSFT 0x20
#define MOD_RALT 0x40
#define MOD_RGUI 0x80

#define LC(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_LCTL) | keycode)
#define LS(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_LSFT) | keycode)
#define LA(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_LALT) | keycode)
#define LG(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_LGUI) | keycode)
#define RC(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_RCTL) | keycode)
#define RS(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_RSFT) | keycode)
#define RA(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_RALT) | keycode)
#define RG(keycode) (ZMK_CODE_PACK_MODIFIERS(MOD_RGUI) | keycode)