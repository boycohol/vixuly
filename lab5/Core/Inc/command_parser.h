/*
 * command_parser.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Admin
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

#define MAX_BUFFER_SIZE  30

extern unsigned char temp;
extern unsigned char buffer[MAX_BUFFER_SIZE];
extern unsigned char index_buffer;
extern unsigned char buffer_flag;

void fsm_command_parser(void);

unsigned char start_response_ADC_value(void);

unsigned char stop_response_ADC_value(void);

#endif /* INC_COMMAND_PARSER_H_ */
