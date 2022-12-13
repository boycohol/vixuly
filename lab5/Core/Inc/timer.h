/*
 * timer.h
 *
 *  Created on: Dec 12, 2022
 *      Author: Admin
 */

#ifndef SRC_TIMER_H_
#define SRC_TIMER_H_

#define TIMER_CYCLE		10

extern int timer_counter;
extern int timer_flag;

void setTimer( int duration );

void timer_run(void);

#endif /* SRC_TIMER_H_ */
