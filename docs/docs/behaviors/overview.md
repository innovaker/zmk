---
title: Behaviors
sidebar_label: Overview
---

The behaviors available in ZMK are:

- `kp` [Key Press](/docs/behaviors/key-press): sends key presses and releases in response to activating a certain key.
- `mo` [Momentary Layer](/docs/behaviors/layers#momentary-layer): takes a single binding argument of the numeric ID of the layer to momentarily enable when that key is held.
- `trans` [Transparent](/docs/behaviors/misc/#transparent): is useful to be place in higher layers above `mo` bindings to be sure the key release is handled by the lower layer. No binding arguments are required.
- `none` [None](/docs/behaviors/misc/#none): is useful to be place in higher layers above `mo` bindings to prevent the key position press/release being handled by the lower layer. No binding arguments are required.
- `mt` [Mod-Tap](/docs/behaviors/mod-tap): is the "mod-tap" behavior, and takes two binding arguments, the modifier to use if held, and the keycode to send if tapped.
