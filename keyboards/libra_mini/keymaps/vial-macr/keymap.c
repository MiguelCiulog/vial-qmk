/* SPDX-License-Identifier: GPL-2.0-or-later */

#define KC_LSQB S(KC_LBRC) // Left square bracket
#define KC_RSQB S(KC_RBRC) // Right square bracket

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   /**/  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,  KC_BSPC, 
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   /**/  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   /**/  KC_NO,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 
		KC_LGUI, KC_LCTL, 		   KC_LALT, LT(1, KC_SPC), 	 /**/  MO(2),   		 KC_RALT,				    KC_RCTL, KC_RGUI
	),

	[1] = LAYOUT(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   /**/  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, 
		KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_QUOT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		   KC_TRNS, MO(3),      	 /**/  KC_TRNS, 		 KC_TRNS,				    KC_TRNS, KC_TRNS
	),

	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_LBRC, KC_LSQB, KC_RSQB, KC_RBRC, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		    KC_TRNS, KC_TRNS,        /**/  MO(3),            KC_TRNS,                   KC_TRNS, KC_TRNS
	),

	[3] = LAYOUT(
		KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  /**/  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,/**/  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  
		KC_TRNS, KC_TRNS,  		   KC_TRNS, KC_TRNS,    	 /**/  KC_TRNS, 		 KC_TRNS,				    KC_TRNS, KC_TRNS
	),

};

// #include <print.h>
// report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
//     if (mouse_report.x < 0) {
//         print("left");
//         tap_code(KC_LEFT);
//     }
//     if (mouse_report.x > 0) {
//         tap_code(KC_RIGHT);
//     }
//     if (mouse_report.y < 0) {
//         tap_code(KC_UP);
//     }
//     if (mouse_report.y > 0) {
//         tap_code(KC_DOWN);
//     }
//     return mouse_report;
// }

// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   //debug_keyboard=true;
//   debug_mouse=true;
// }


