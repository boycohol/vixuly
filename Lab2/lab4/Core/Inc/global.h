/*
 * global.h
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;

} sTask;

#define SCH_MAX_TASKS	40
#define NO_TASK_ID		0

extern sTask SCH_tasks_G[SCH_MAX_TASKS];


#endif /* INC_GLOBAL_H_ */
