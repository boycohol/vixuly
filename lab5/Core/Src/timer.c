/*
 * timer.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Admin
 */

#include "timer.h"
#include "main.h"

int timer_flag = 0;
int timer_counter = 0;

void setTimer ( int duration ){
	timer_counter = duration / TIMER_CYCLE ;
	timer_flag = 0;
}

void timer_run (void){
	if( timer_counter > 0){
		timer_counter --;
		if ( timer_counter == 0) timer_flag = 1;
	}
}
