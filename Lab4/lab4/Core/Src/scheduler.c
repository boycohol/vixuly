/*
 * scheduler.c
 *
 *  Created on: Dec 4, 2022
 *      Author: Admin
 */
#include "scheduler.h"
#include "main.h"
#include "global.h"

void SCH_init() {
	for (int i = 0; i < SCH_MAX_TASKS; i++) {
		SCH_Delete_Task(i);
	}
}

unsigned char SCH_Add_Task(void (*pFunction)(), unsigned int DELAY,
		unsigned int PERIOD) {
	unsigned char index = 0;
	while (SCH_tasks_G[index].pTask != 0 && index < SCH_MAX_TASKS) {
		index++;
	}
	if (index == SCH_MAX_TASKS) {
		return -1;
	}
	SCH_tasks_G[index].pTask = pFunction;
	SCH_tasks_G[index].Delay = DELAY;
	SCH_tasks_G[index].Period = PERIOD;
	SCH_tasks_G[index].RunMe = 0;
	return index;
}

void SCH_Update() {
	for (int index = 0; index < SCH_MAX_TASKS; index++) {
		if (SCH_tasks_G[index].pTask) {
			if (SCH_tasks_G[index].Delay == 0) {
				SCH_tasks_G[index].RunMe++;
				if (SCH_tasks_G[index].Period) {
					SCH_tasks_G[index].Delay = SCH_tasks_G[index].Period;
				}
			} else {
				SCH_tasks_G[index].Delay--;
			}
		}
	}
}

unsigned char SCH_Delete_Task(const int index) {
	if (SCH_tasks_G[index].pTask == 0) {
		return -1;
	}
	SCH_tasks_G[index].Delay = 0;
	SCH_tasks_G[index].Period = 0;
	SCH_tasks_G[index].RunMe = 0;
	SCH_tasks_G[index].pTask = 0x0000;
	return 1;
}

void SCH_Dispatch_Tasks() {
	for (int index = 0; index < SCH_MAX_TASKS; index++) {
		if (SCH_tasks_G[index].RunMe > 0) {
			(*SCH_tasks_G[index].pTask)();
			SCH_tasks_G[index].RunMe--;

			if (SCH_tasks_G[index].Period == 0) {
				SCH_Delete_Task(index);
			}
		}
	}
}

