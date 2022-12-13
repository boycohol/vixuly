/*
 * command_parser.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Admin
 */
#include "main.h"
#include "command_parser.h"

unsigned char temp = 0;
unsigned char index_buffer = 0;
unsigned char buffer[MAX_BUFFER_SIZE];
unsigned char buffer_flag = 0;

enum CommandParserState {
	NORMAL, WAIT
};
enum CommandParserState state = NORMAL;

unsigned char response = 0;
unsigned char stopResponse = 1;

void fsm_command_parser(void) {
	switch (state) {
	case NORMAL:
		if (temp == '#') {
			uint8_t index0 = index_buffer - 5;
			if (index0 < 0)
				index0 += 30;
			uint8_t index1 = index_buffer - 4;
			if (index1 < 0)
				index1 += 30;
			uint8_t index2 = index_buffer - 3;
			if (index2 < 0)
				index2 += 30;
			uint8_t index3 = index_buffer - 2;
			if (index3 < 0)
				index3 += 30;
			if (buffer[index0] == '!' && buffer[index1] == 'R'
					&& buffer[index2] == 'S' && buffer[index3] == 'T') {
				response = 1;
				stopResponse = 0;
				state = WAIT;
			}
		}
		break;
	case WAIT:
		if (temp == '#') {
			uint8_t index0 = index_buffer - 4;
			if (index0 < 0)
				index0 += 30;
			uint8_t index1 = index_buffer - 3;
			if (index1 < 0)
				index1 += 30;
			uint8_t index2 = index_buffer - 2;
			if (index2 < 0)
				index2 += 30;
			if (buffer[index0] == '!' && buffer[index1] == 'O'
					&& buffer[index2] == 'K') {
				response = 0;
				stopResponse = 1;
				state = NORMAL;
			}
		}
		break;
	}
}

unsigned char start_response_ADC_value() {
	return response;
}

unsigned char stop_response_ADC_value() {
	return stopResponse;
}

