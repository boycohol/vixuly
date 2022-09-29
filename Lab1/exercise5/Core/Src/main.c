/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void) {
	/* USER CODE BEGIN 1 */

	/* USER CODE END 1 */

	/* MCU Configuration--------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	/* USER CODE BEGIN 2 */
	void display7SEG1(int num) {
		switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
			break;
		default:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			break;
		}
	}
	void display7SEG2(int num) {
		switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
			break;
		default:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
			break;
		}
	}

	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	int flag_led_red = 1, flag_led_yellow = 0, flag_led_green = 0,
			count_red = 5, count_yellow = 0, count_green = 0, count_red2 = 0,
			count_yellow2 = 0, count_green2 = 3, flag_led_red2 = 0,
			flag_led_yellow2 = 0, flag_led_green2 = 1;
	while (1) {
		/* USER CODE END WHILE */
		if (flag_led_red) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
			if (count_red > 0) {
				display7SEG1(count_red);
				count_red--;
			} else if (count_red == 0) {
				display7SEG1(0);
				flag_led_red = 0;
				flag_led_yellow = 0;
				flag_led_green = 1;
				count_green = 3;
			}
		} else if (flag_led_yellow) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
			if (count_yellow > 0) {
				display7SEG1(count_yellow);
				count_yellow--;
			} else if (count_yellow == 0) {
				display7SEG1(0);
				flag_led_red = 1;
				flag_led_yellow = 0;
				flag_led_green = 0;
				count_red = 5;
			}
		} else if (flag_led_green) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 1);
			if (count_green > 0) {
				display7SEG1(count_green);
				count_green--;
			} else if (count_green == 0) {
				display7SEG1(0);
				flag_led_red = 0;
				flag_led_yellow = 1;
				flag_led_green = 0;
				count_yellow = 2;
			}
		}
		//Set the other traffic lights
		if (flag_led_red2) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
			if (count_red2 > 0) {
				display7SEG2(count_red2);
				count_red2--;
			} else if (count_red2 == 0) {
				display7SEG2(0);
				flag_led_red2 = 0;
				flag_led_yellow2 = 0;
				flag_led_green2 = 1;
				count_green2 = 3;
			}
		} else if (flag_led_yellow2) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
			if (count_yellow2 > 0) {
				display7SEG2(count_yellow2);
				count_yellow2--;
			} else if (count_yellow2 == 0) {
				display7SEG2(0);
				flag_led_red2 = 1;
				flag_led_yellow2 = 0;
				flag_led_green2 = 0;
				count_red2 = 5;
			}
		} else if (flag_led_green2) {
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
			if (count_green2 > 0) {
				display7SEG2(count_green2);
				count_green2--;
			} else if (count_green2 == 0) {
				display7SEG2(0);
				flag_led_red2 = 0;
				flag_led_yellow2 = 1;
				flag_led_green2 = 0;
				count_yellow2 = 2;
			}
		}
		HAL_Delay(1000);
		/* USER CODE BEGIN 3 */
	}
	/* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/** Initializes the RCC Oscillators according to the specified parameters
	 * in the RCC_OscInitTypeDef structure.
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/** Initializes the CPU, AHB and APB buses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief GPIO Initialization Function
 * @param None
 * @retval None
 */
static void MX_GPIO_Init(void) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOA,
			LED_RED_Pin | LED_YELLOW_Pin | LED_GREEN_Pin | LED_RED2_Pin
					| LED_YELLOW2_Pin | LED_GREEN2_Pin, GPIO_PIN_RESET);

	/*Configure GPIO pin Output Level */
	HAL_GPIO_WritePin(GPIOB,
			g_Pin | f_Pin | e_Pin | d1_Pin | c1_Pin | b1_Pin | a1_Pin | d_Pin
					| c_Pin | b_Pin | a_Pin | g1_Pin | f1_Pin | e1_Pin,
			GPIO_PIN_RESET);

	/*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin LED_RED2_Pin
	 LED_YELLOW2_Pin LED_GREEN2_Pin */
	GPIO_InitStruct.Pin = LED_RED_Pin | LED_YELLOW_Pin | LED_GREEN_Pin
			| LED_RED2_Pin | LED_YELLOW2_Pin | LED_GREEN2_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

	/*Configure GPIO pins : g_Pin f_Pin e_Pin d1_Pin
	 c1_Pin b1_Pin a1_Pin d_Pin
	 c_Pin b_Pin a_Pin g1_Pin
	 f1_Pin e1_Pin */
	GPIO_InitStruct.Pin = g_Pin | f_Pin | e_Pin | d1_Pin | c1_Pin | b1_Pin
			| a1_Pin | d_Pin | c_Pin | b_Pin | a_Pin | g1_Pin | f1_Pin | e1_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void) {
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
