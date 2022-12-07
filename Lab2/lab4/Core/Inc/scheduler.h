/*
 * scheduler.h
 *
 *  Created on: Dec 4, 2022
 *      Author: Admin
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

void SCH_init();
unsigned char SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Update();
unsigned char SCH_Delete_Task(const int TASK_INDEX);

void SCH_Dispatch_Tasks();

#endif /* INC_SCHEDULER_H_ */
