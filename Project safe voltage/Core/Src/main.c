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

#include "SevenSegment3x7.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */


/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/

/* USER CODE BEGIN PD */

//#define Setup_Button_State HAL_GPIO_ReadPin(BUTON5_GPIO_Port, BUTON5_Pin)
#define yukselt_butonu    HAL_GPIO_ReadPin(BUTON4_GPIO_Port, BUTON4_Pin)
#define azalt_butonu      HAL_GPIO_ReadPin(BUTON3_GPIO_Port, BUTON3_Pin)
#define Ust_deger_butonu  HAL_GPIO_ReadPin(BUTON2_GPIO_Port, BUTON2_Pin)
#define alt_deger_butonu  HAL_GPIO_ReadPin(BUTON1_GPIO_Port, BUTON1_Pin)




/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

uint16_t adcDeger = 0;
uint16_t yeniAdcDeger = 0;

int adc_oku();

int a=0;
int u=0;

int setdeger=0;
int ustdeger=0;
int altdeger=0;
int altsetdeger=0;
int ustsetdeger=0;

int z=0;

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
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
  MX_ADC_Init();
  /* USER CODE BEGIN 2 */
  adc_oku();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */


	  		//HAL_Delay();






	  	  	  if(z == 0)
	  	  	  {
  	  			  HAL_Delay(100);
	  	  		  z=1;
	  	  	  }




	  	  	 if(0 == Ust_deger_butonu)
	  	  		        {

	  	  		        	u++;
	  	  		        	HAL_Delay(200);
	  	  		        }

	  	     if(0 == alt_deger_butonu)
	  	  	  	  	    {
	  	    	 	 	 	a++;
	  	    	 	 	 	HAL_Delay(200);
	  	  	  	  	    }




	  	     //alt deger ayarları

	  	    if( ((a % 2) == 0) && ((u % 2) == 0) )
	  	    {


	  	    	 adc_oku();

	  	    	for(int count = 0 ; count<500 ; count++ )
	  	    	{

	  	    		 Disp(yeniAdcDeger);
	  	    	}

	  	    	// adc_oku();
	  	    	//	Disp(yeniAdcDeger);



	  	    	if((a == 0) || (a == 1))
		        {
	  	    		altdeger=yeniAdcDeger;
	  	    	}

	  	    	if(a>0)
	  	    	{

	  	    		altdeger=altsetdeger;
	  	    	}



	  	    	if((u == 0) || (u == 1))
			        {
		  	    		ustdeger=yeniAdcDeger;
		  	    	}

		  	    	if(u>0)
		  	    	{

		  	    		ustdeger=ustsetdeger;
		  	    	}


	  	    }


	        if( !(a % 2 == 0) )
	        {

	        	if(0 == yukselt_butonu)
	        	{
	        		HAL_Delay(200);
	        		altdeger++;
	        	}

	        	if(0 == azalt_butonu)
	        	{
	        		HAL_Delay(200);
	        		altdeger--;
	        	}

	        	altsetdeger=altdeger;
	        	Disp(altsetdeger);

	        }



	        if( !(u % 2 == 0) )
	        {


	        	if(0 == yukselt_butonu)
	        	{
	        		HAL_Delay(200);
	        		ustdeger++;
	        	}

	        	if(0 == azalt_butonu)
	        	{
	        		HAL_Delay(200);
	        		ustdeger--;
	        	}

	        	ustsetdeger=ustdeger;
	        	Disp(ustsetdeger);


	        }






	        if((yeniAdcDeger <= ustsetdeger ) && (yeniAdcDeger >= altsetdeger ) )
	        {
	        	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, SET);

	        }

	        else
	        {
	        	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, RESET);

	        }








  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI|RCC_OSCILLATORTYPE_HSI14;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSI14State = RCC_HSI14_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.HSI14CalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC_Init(void)
{

  /* USER CODE BEGIN ADC_Init 0 */

  /* USER CODE END ADC_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC_Init 1 */

  /* USER CODE END ADC_Init 1 */
  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc.Instance = ADC1;
  hadc.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc.Init.Resolution = ADC_RESOLUTION_12B;
  hadc.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc.Init.ScanConvMode = ADC_SCAN_DIRECTION_FORWARD;
  hadc.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc.Init.LowPowerAutoWait = DISABLE;
  hadc.Init.LowPowerAutoPowerOff = DISABLE;
  hadc.Init.ContinuousConvMode = ENABLE;
  hadc.Init.DiscontinuousConvMode = DISABLE;
  hadc.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc.Init.DMAContinuousRequests = DISABLE;
  hadc.Init.Overrun = ADC_OVR_DATA_PRESERVED;
  if (HAL_ADC_Init(&hadc) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure for the selected ADC regular channel to be converted.
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = ADC_RANK_CHANNEL_NUMBER;
  sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
  if (HAL_ADC_ConfigChannel(&hadc, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC_Init 2 */

  /* USER CODE END ADC_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_Pin|REL_Pin|A_Pin|B_Pin
                          |C_Pin|D_Pin|E_Pin|F_Pin
                          |G_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, Yuzler_Pin|Onlar_Pin|Birler_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : BUTON1_Pin BUTON2_Pin BUTON3_Pin BUTON4_Pin
                           BUTON5_Pin */
  GPIO_InitStruct.Pin = BUTON1_Pin|BUTON2_Pin|BUTON3_Pin|BUTON4_Pin
                          |BUTON5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_Pin REL_Pin A_Pin B_Pin
                           C_Pin D_Pin E_Pin F_Pin
                           G_Pin */
  GPIO_InitStruct.Pin = LED_Pin|REL_Pin|A_Pin|B_Pin
                          |C_Pin|D_Pin|E_Pin|F_Pin
                          |G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : ASENS_Pin VSENS_Pin */
  GPIO_InitStruct.Pin = ASENS_Pin|VSENS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : Yuzler_Pin Onlar_Pin Birler_Pin */
  GPIO_InitStruct.Pin = Yuzler_Pin|Onlar_Pin|Birler_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
adc_oku(){

				HAL_ADC_Start(&hadc);
		  	    adcDeger = HAL_ADC_GetValue(&hadc);
		  	    yeniAdcDeger=adcDeger/10;


}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
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

