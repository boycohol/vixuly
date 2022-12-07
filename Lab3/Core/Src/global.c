/*
 * global.c
 *
 *  Created on: Nov 9, 2022
 *      Author: Admin
 */

#include "global.h"

int status_mode = 1;

int led_count[3] = { 5, 3, 2 };
int final_led_count[3] = { 5, 2, 3 };

int state_led[2] = { 0, 2 };
int index_led[2] = { 0, 0 };

int buffer_led[2] = { 0, 0 };

int index00 = 0;
