/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define g_Pin GPIO_PIN_0
#define g_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_1
#define f_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_2
#define e_GPIO_Port GPIOB
#define d1_Pin GPIO_PIN_10
#define d1_GPIO_Port GPIOB
#define c1_Pin GPIO_PIN_11
#define c1_GPIO_Port GPIOB
#define b1_Pin GPIO_PIN_12
#define b1_GPIO_Port GPIOB
#define a1_Pin GPIO_PIN_13
#define a1_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_9
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_10
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_11
#define LED_GREEN2_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_4
#define c_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_5
#define b_GPIO_Port GPIOB
#define a_Pin GPIO_PIN_6
#define a_GPIO_Port GPIOB
#define g1_Pin GPIO_PIN_7
#define g1_GPIO_Port GPIOB
#define f1_Pin GPIO_PIN_8
#define f1_GPIO_Port GPIOB
#define e1_Pin GPIO_PIN_9
#define e1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
