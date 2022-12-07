/*
 * input_processing.c
 *
 *  Created on: Nov 9, 2022
 *      Author: Admin
 */
#include "input_processing.h"
#include "main.h"
#include "global.h"
#include "input_reading.h"

void display7SEG1(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 0);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 1);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 1);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 1);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 1);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 0);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 1);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 1);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 1);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 1);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 1);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 1);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 0);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 1);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 1);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 0);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 0);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 0);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 0);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 0);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 0);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 0);
		break;
	default:
		HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, 1);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, 1);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, 1);
		HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, 1);
		HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, 1);
		HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, 1);
		HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, 1);
		break;
	}
}
void display7SEG2(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 0);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 1);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 1);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 1);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 1);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 0);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 1);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 1);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 1);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 1);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 1);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 1);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 0);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 1);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 1);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 0);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 0);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 0);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 0);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 0);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 0);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 0);
		break;
	default:
		HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, 1);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, 1);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, 1);
		HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, 1);
		HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, 1);
		HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, 1);
		HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, 1);
		break;
	}
}

void fsm_mode_button1() {
	switch (status_mode) {
	case MODE1:
		if (isButtonPressed(0)) {
			status_mode = MODE2;
		}
		break;
	case MODE2:
		if (isButtonPressed(0)) {
			status_mode = MODE3;
		}
		break;

	case MODE3:
		if (isButtonPressed(0)) {
			status_mode = MODE4;
		}
		break;
	case MODE4:
		if (isButtonPressed(0)) {
			status_mode = MODE1;

		}
		break;
	default:
		break;
	}
}

int updateState(){
	if(status_mode==MODE1){
		return 1;
	}else if(status_mode==MODE2){
		return 2;
	}else if(status_mode==MODE3){
		return 3;
	}else if(status_mode==MODE4){
		return 4;
	}else{
		return -1;
	}
}

void fsm_mode_button2() {
	switch (status_mode) {
	case MODE1:
		led_count[0] = final_led_count[0];
		led_count[1] = final_led_count[1];
		led_count[2] = final_led_count[2];
		break;
	case MODE2:
		if (isButtonPressed(1)) {
			led_count[0]++;
		}
		buffer_led[0] = led_count[0] / 10;
		buffer_led[1] = led_count[0] % 10;
		break;

	case MODE3:
		if (isButtonPressed(1)) {
			led_count[1]++;
		}
		buffer_led[0] = led_count[1] / 10;
		buffer_led[1] = led_count[1] % 10;
		break;
	case MODE4:
		if (isButtonPressed(1)) {
			led_count[2]++;
		}
		buffer_led[0] = led_count[2] / 10;
		buffer_led[1] = led_count[2] % 10;
		break;
	default:
		break;
	}
}
void fsm_mode_button3() {
	switch (status_mode) {
	case MODE2:
		if (isButtonPressed(2)) {
			final_led_count[0] = led_count[0];
		}
		break;
	case MODE3:
		if (isButtonPressed(2)) {
			final_led_count[1] = led_count[1];
		}
		break;
	case MODE4:
		if (isButtonPressed(2)) {
			final_led_count[2] = led_count[2];
		}
		break;
	default:
		break;
	}
}

void led_blink() {
	if (status_mode == MODE2) {
		HAL_GPIO_TogglePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin);
		HAL_GPIO_TogglePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin);
		HAL_GPIO_WritePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin, 1);
	} else if (status_mode == MODE3) {
		HAL_GPIO_TogglePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin);
		HAL_GPIO_TogglePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin);
		HAL_GPIO_WritePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin, 1);
	} else if (status_mode == MODE4) {
		HAL_GPIO_TogglePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin);
		HAL_GPIO_TogglePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin);
		HAL_GPIO_WritePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin, 1);
		HAL_GPIO_WritePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin, 1);
	}
}

void display_set_value() {
	switch (index00 % 2) {
	case 0:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		display7SEG1(buffer_led[1]);
		index00++;
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		display7SEG1(buffer_led[0]);
		index00++;
		break;
	default:
		break;
	}
}

void fsm_traffic_led() {
	if (status_mode == MODE1) {
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		if (state_led[0] == 0) {
			HAL_GPIO_WritePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin, 0);
			HAL_GPIO_WritePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin, 1);
			display7SEG1(final_led_count[0] - index_led[0]);
			index_led[0]++;
			if (final_led_count[0] == index_led[0]) {
				index_led[0] = 0;
				state_led[0] = 2;
			}
		} else if (state_led[0] == 1) {
			HAL_GPIO_WritePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin, 0);
			HAL_GPIO_WritePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin, 1);
			display7SEG1(final_led_count[1] - index_led[0]);
			index_led[0]++;
			if (final_led_count[1] == index_led[0]) {
				index_led[0] = 0;
				state_led[0] = 0;
			}
		} else if (state_led[0] == 2) {
			HAL_GPIO_WritePin(TRAFFIC_RED_GPIO_Port, TRAFFIC_RED_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC_AMBER_GPIO_Port, TRAFFIC_AMBER_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC_GREEN_GPIO_Port, TRAFFIC_GREEN_Pin, 0);
			display7SEG1(final_led_count[2] - index_led[0]);
			index_led[0]++;
			if (final_led_count[2] == index_led[0]) {
				index_led[0] = 0;
				state_led[0] = 1;
			}
		}
		if (state_led[1] == 2) {
			HAL_GPIO_WritePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin, 0);
			display7SEG2(final_led_count[2] - index_led[1]);
			index_led[1]++;
			if (final_led_count[2] == index_led[1]) {
				index_led[1] = 0;
				state_led[1] = 1;
			}
		} else if (state_led[1] == 1) {
			HAL_GPIO_WritePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin, 0);
			HAL_GPIO_WritePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin, 1);
			display7SEG2(final_led_count[1] - index_led[1]);
			index_led[1]++;
			if (final_led_count[1] == index_led[1]) {
				index_led[1] = 0;
				state_led[1] = 0;
			}
		} else if (state_led[1] == 0) {
			HAL_GPIO_WritePin(TRAFFIC2_RED_GPIO_Port, TRAFFIC2_RED_Pin, 0);
			HAL_GPIO_WritePin(TRAFFIC2_AMBER_GPIO_Port, TRAFFIC2_AMBER_Pin, 1);
			HAL_GPIO_WritePin(TRAFFIC2_GREEN_GPIO_Port, TRAFFIC2_GREEN_Pin, 1);
			display7SEG2(final_led_count[0] - index_led[1]);
			index_led[1]++;
			if (final_led_count[0] == index_led[1]) {
				index_led[1] = 0;
				state_led[1] = 2;
			}
		}
	}
}
