/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ \ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ø │ Æ │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_PIPE KC_GRV  // |
#define NO_1    KC_1    // 1
#define NO_2    KC_2    // 2
#define NO_3    KC_3    // 3
#define NO_4    KC_4    // 4
#define NO_5    KC_5    // 5
#define NO_6    KC_6    // 6
#define NO_7    KC_7    // 7
#define NO_8    KC_8    // 8
#define NO_9    KC_9    // 9
#define NO_0    KC_0    // 0
#define NO_PLUS KC_MINS // +
#define NO_BSLS KC_EQL  // (backslash)
// Row 2
#define NO_Q    KC_Q    // Q
#define NO_W    KC_W    // W
#define NO_E    KC_E    // E
#define NO_R    KC_R    // R
#define NO_T    KC_T    // T
#define NO_Y    KC_Y    // Y
#define NO_U    KC_U    // U
#define NO_I    KC_I    // I
#define NO_O    KC_O    // O
#define NO_P    KC_P    // P
#define NO_ARNG KC_LBRC // Å
#define NO_DIAE KC_RBRC // ¨ (dead)
// Row 3
#define NO_A    KC_A    // A
#define NO_S    KC_S    // S
#define NO_D    KC_D    // D
#define NO_F    KC_F    // F
#define NO_G    KC_G    // G
#define NO_H    KC_H    // H
#define NO_J    KC_J    // J
#define NO_K    KC_K    // K
#define NO_L    KC_L    // L
#define NO_OSTR KC_SCLN // Ø
#define NO_AE   KC_QUOT // Æ
#define NO_QUOT KC_NUHS // '
// Row 4
#define NO_LABK KC_NUBS // <
#define NO_Z    KC_Z    // Z
#define NO_X    KC_X    // X
#define NO_C    KC_C    // C
#define NO_V    KC_V    // V
#define NO_B    KC_B    // B
#define NO_N    KC_N    // N
#define NO_M    KC_M    // M
#define NO_COMM KC_COMM // ,
#define NO_DOT  KC_DOT  // .
#define NO_MINS KC_SLSH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_SECT S(NO_PIPE) // §
#define NO_EXLM S(NO_1)    // !
#define NO_DQUO S(NO_2)    // "
#define NO_HASH S(NO_3)    // #
#define NO_CURR S(NO_4)    // ¤
#define NO_PERC S(NO_5)    // %
#define NO_AMPR S(NO_6)    // &
#define NO_SLSH S(NO_7)    // /
#define NO_LPRN S(NO_8)    // (
#define NO_RPRN S(NO_9)    // )
#define NO_EQL  S(NO_0)    // =
#define NO_QUES S(NO_PLUS) // ?
#define NO_GRV  S(NO_BSLS) // ` (dead)
// Row 2
#define NO_CIRC S(NO_DIAE) // ^ (dead)
// Row 3
#define NO_ASTR S(NO_QUOT) // *
// Row 4
#define NO_GT LS(NO_LT)       // >
#define NO_SEMI LS(NO_COMMA)  // ;
#define NO_COLON LS(NO_DOT)   // :
#define NO_UNDER LS(NO_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │   │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define NO_AT   ALGR(NO_2)    // @
#define NO_PND  ALGR(NO_3)    // £
#define NO_DLR  ALGR(NO_4)    // $
#define NO_EURO ALGR(NO_5)    // €
#define NO_LCBR ALGR(NO_7)    // {
#define NO_LBRC ALGR(NO_8)    // [
#define NO_RBRC ALGR(NO_9)    // ]
#define NO_RCBR ALGR(NO_0)    // }
#define NO_ACUT ALGR(NO_BSLS) // ´ (dead)
// Row 2 (only AltGr)
#define NO_TILD ALGR(NO_DIAE) // ~ (dead)