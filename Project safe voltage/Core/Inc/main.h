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
#include "stm32f0xx_hal.h"

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
#define ADC1_IN0_Pin GPIO_PIN_0
#define ADC1_IN0_GPIO_Port GPIOA
#define BUTON1_Pin GPIO_PIN_3
#define BUTON1_GPIO_Port GPIOA
#define BUTON2_Pin GPIO_PIN_4
#define BUTON2_GPIO_Port GPIOA
#define BUTON3_Pin GPIO_PIN_5
#define BUTON3_GPIO_Port GPIOA
#define BUTON4_Pin GPIO_PIN_6
#define BUTON4_GPIO_Port GPIOA
#define BUTON5_Pin GPIO_PIN_7
#define BUTON5_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_11
#define LED_GPIO_Port GPIOB
#define ASENS_Pin GPIO_PIN_13
#define ASENS_GPIO_Port GPIOB
#define VSENS_Pin GPIO_PIN_14
#define VSENS_GPIO_Port GPIOB
#define REL_Pin GPIO_PIN_15
#define REL_GPIO_Port GPIOB
#define Yuzler_Pin GPIO_PIN_9
#define Yuzler_GPIO_Port GPIOA
#define Onlar_Pin GPIO_PIN_10
#define Onlar_GPIO_Port GPIOA
#define Birler_Pin GPIO_PIN_11
#define Birler_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_3
#define A_GPIO_Port GPIOB
#define B_Pin GPIO_PIN_4
#define B_GPIO_Port GPIOB
#define C_Pin GPIO_PIN_5
#define C_GPIO_Port GPIOB
#define D_Pin GPIO_PIN_6
#define D_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_7
#define E_GPIO_Port GPIOB
#define F_Pin GPIO_PIN_8
#define F_GPIO_Port GPIOB
#define G_Pin GPIO_PIN_9
#define G_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
