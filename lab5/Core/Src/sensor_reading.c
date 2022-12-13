/*
 * sensor_reading.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Admin
 */
#include "main.h"
#include "sensor_reading.h"
#include"command_parser.h"
#include "timer.h"
#include "stdlib.h"

enum sensorReadingState {
	NONE, SEND
};
enum sensorReadingState sensor_reading_state = NONE;

uint32_t ADC_value = 0;
unsigned char ADC_buffer[MAX_BUFFER_SIZE];
unsigned char start_str[] = "!ADC=";
unsigned char end_str[] = "#\r\n";

void fsm_sensor_reading(void) {
	switch (sensor_reading_state) {
	case NONE:
		if (start_response_ADC_value()) {
			ADC_value = HAL_ADC_GetValue(&hadc1);
			itoa(ADC_value, &ADC_buffer[0], 10);
			timer_flag = 1;
			sensor_reading_state = SEND;
		}
		break;
	case SEND:
		if (timer_flag) {
			HAL_UART_Transmit(&huart2, start_str, sizeof(start_str),
					sizeof(start_str) * 10);
			HAL_UART_Transmit(&huart2, ADC_buffer, sizeof(ADC_buffer),
					sizeof(ADC_buffer) * 10);
			HAL_UART_Transmit(&huart2, end_str, sizeof(end_str),
					sizeof(end_str) * 10);
			setTimer(3000);
		}
		sensor_reading_state = NONE;
		if (stop_response_ADC_value()) {
			break;
		}
		break;
	}
}

