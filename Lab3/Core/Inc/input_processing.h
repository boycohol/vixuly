/*
 * input_processing.h
 *
 *  Created on: Nov 8, 2022
 *      Author: Admin
 */

#ifndef INC_INPUT_PROCESSING_H_
#define INC_INPUT_PROCESSING_H_

void fsm_mode_button1();
void fsm_mode_button2();
void fsm_mode_button3();

void display7SEG1(int num);
void display7SEG2(int num);

void led_blink();
void display_set_value();

void fsm_traffic_led();

int updateState();

#endif /* INC_INPUT_PROCESSING_H_ */
