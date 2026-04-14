#pragma once

#include <stdbool.h>
#include <stdint.h>

bool layer_is_default(void);
bool layer_is_not_default(void);
bool no_mods(void);
bool handle_2key_macro(bool is_pressed, bool *state, uint8_t mods, uint8_t keycode, uint8_t alt_keycode);
bool handle_layer_clear(bool pressed, bool* is_default);