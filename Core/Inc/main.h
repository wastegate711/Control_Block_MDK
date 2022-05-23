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
#include "stm32f4xx_hal.h"

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
#define Valve_Cool_Water_Pin GPIO_PIN_7
#define Valve_Cool_Water_GPIO_Port GPIOE
#define Valve_Hot_Water_Pin GPIO_PIN_8
#define Valve_Hot_Water_GPIO_Port GPIOE
#define Valve_Foam_Pin GPIO_PIN_9
#define Valve_Foam_GPIO_Port GPIOE
#define Valve_Air_Pin GPIO_PIN_10
#define Valve_Air_GPIO_Port GPIOE
#define Valve_Insect_Pin GPIO_PIN_11
#define Valve_Insect_GPIO_Port GPIOE
#define Valve_Osmos_Pin GPIO_PIN_12
#define Valve_Osmos_GPIO_Port GPIOE
#define Valve_Drop_Pin GPIO_PIN_13
#define Valve_Drop_GPIO_Port GPIOE
#define Dispenser_Vosk_Pin GPIO_PIN_14
#define Dispenser_Vosk_GPIO_Port GPIOE
#define Dispenser_Foam_Pin GPIO_PIN_15
#define Dispenser_Foam_GPIO_Port GPIOE
#define Sensor_Stream_Pin GPIO_PIN_10
#define Sensor_Stream_GPIO_Port GPIOB
#define Motor_Start_Pin GPIO_PIN_10
#define Motor_Start_GPIO_Port GPIOD
#define Motor_Revers_Pin GPIO_PIN_11
#define Motor_Revers_GPIO_Port GPIOD
#define PWM_Inverter_Pin GPIO_PIN_12
#define PWM_Inverter_GPIO_Port GPIOD
#define CD_Card_Detect_Pin GPIO_PIN_7
#define CD_Card_Detect_GPIO_Port GPIOC
#define CS_rs485_Usart1_Pin GPIO_PIN_11
#define CS_rs485_Usart1_GPIO_Port GPIOA
#define CS_rs485_Usart2_Pin GPIO_PIN_7
#define CS_rs485_Usart2_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
