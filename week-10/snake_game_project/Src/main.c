/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
//                7 bit address: 1110xxx
#define I2C_ADDRESS_LEDMATRIX (0b11100000)
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

I2C_HandleTypeDef hi2c1;

osThreadId defaultTaskHandle;
osThreadId ControlLEDMHandle;
osThreadId MoveDotHandle;
osMutexId displayMutexHandle;
/* USER CODE BEGIN PV */
uint8_t display_size = 8;
//uint8_t snake_display[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint8_t snake_x_coordinate = 0x00;
uint8_t snake_y_coordinate = 0x00;

typedef enum direction{
	DEFAULT,
	UP,
	DOWN,
	RIGHT,
	LEFT
}direction_t;

direction_t direction = DEFAULT;
//button debounce
int prev_start_time_down_btn = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
void StartDefaultTask(void const * argument);
void StartControlLEDM(void const * argument);
void StartMoveDot(void const * argument);

/* USER CODE BEGIN PFP */
void clear_led_matrix();
void set_led_matrix(const uint8_t* data);
void set_snake_direction(direction_t direction);
void convert_snake_coordinates(uint8_t* array);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void clear_led_matrix(){
  uint8_t buff[2];

  for(int i=0; i<16; i++)
  {
	  buff[0] = i;
	  buff[1] = 0x00;
	  HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, buff, 2, 100);
  }
}

void set_led_matrix(const uint8_t* data){
	clear_led_matrix();
	uint8_t buff[2];

	for(int i = 0; i < 8; i++)
	{
		  buff[0] = i * 2;
		  buff[1] = (data[i] >> 1) | (data[i] << 7);
		  HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, buff, 2, 100);
	}
}

void set_snake_direction(direction_t direction)
{
	switch(direction){
	case DEFAULT:
		if(snake_x_coordinate <= display_size && snake_x_coordinate >= 0)
		snake_x_coordinate += 1;
		//snake_y_coordinate = 0;
		break;
	case UP:
		if(snake_y_coordinate <= display_size)
		snake_y_coordinate -= 1;
		break;
	case DOWN:
		if(snake_y_coordinate >= 0)
		snake_y_coordinate += 1;
		break;
	case RIGHT:
		if(snake_x_coordinate <= display_size)
		snake_x_coordinate += 1;
		break;
	case LEFT:
		if(snake_x_coordinate >= 0)
		snake_x_coordinate -= 1;
		break;
	default:
		break;
	}
}

void convert_snake_coordinates(uint8_t* array)
{
	array[snake_x_coordinate] |= 1 << snake_y_coordinate;
}
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
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */

  //init LED matrix
  uint8_t init1 = 0b00100001;
  uint8_t init2 = 0b10000001;

  HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, &init1, 1, 100);
  HAL_I2C_Master_Transmit(&hi2c1, I2C_ADDRESS_LEDMATRIX, &init2, 1, 100);

  //data matrix
  //const uint8_t data[] = { 0x30, 0x66, 0xc6, 0x80, 0x80, 0xc6, 0x66, 0x30 };
  //{ 0x60, 0x90, 0x1e, 0x05, 0x05, 0x1e, 0x90, 0x60 };

  /* USER CODE END 2 */

  /* Create the mutex(es) */
  /* definition and creation of displayMutex */
  osMutexDef(displayMutex);
  displayMutexHandle = osMutexCreate(osMutex(displayMutex));

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of ControlLEDM */
  osThreadDef(ControlLEDM, StartControlLEDM, osPriorityAboveNormal, 0, 256);
  ControlLEDMHandle = osThreadCreate(osThread(ControlLEDM), NULL);

  /* definition and creation of MoveDot */
  osThreadDef(MoveDot, StartMoveDot, osPriorityNormal, 0, 256);
  MoveDotHandle = osThreadCreate(osThread(MoveDot), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
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
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure LSE Drive Capability 
  */
  HAL_PWR_EnableBkUpAccess();
  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 10;
  RCC_OscInitStruct.PLL.PLLN = 210;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_I2C1;
  PeriphClkInitStruct.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.Timing = 0x00A0A3F7;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Analogue filter 
  */
  if (HAL_I2CEx_ConfigAnalogFilter(&hi2c1, I2C_ANALOGFILTER_ENABLE) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Digital filter 
  */
  if (HAL_I2CEx_ConfigDigitalFilter(&hi2c1, 0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

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
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();

  /*Configure GPIO pin : DOWN_BTN_Pin */
  GPIO_InitStruct.Pin = DOWN_BTN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DOWN_BTN_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

}

/* USER CODE BEGIN 4 */
HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == DOWN_BTN_Pin){
		    if (HAL_GetTick() - 300 < prev_start_time_down_btn) {
		      return;
		    }
		    prev_start_time_down_btn = HAL_GetTick();

		    direction = DOWN;
		}
}
/* USER CODE END 4 */

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
    
    
    
    
    

  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */ 
}

/* USER CODE BEGIN Header_StartControlLEDM */
/**
* @brief Function implementing the ControlLEDM thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartControlLEDM */
void StartControlLEDM(void const * argument)
{
  /* USER CODE BEGIN StartControlLEDM */
  /* Infinite loop */
  for(;;)
  {
	  uint8_t snake_display[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	  set_snake_direction(direction);
	  convert_snake_coordinates(snake_display);
  	  set_led_matrix(snake_display);
  	  osDelay(500);
  	  //osThreadResume(MoveDotHandle);
  	  //osThreadSuspend(NULL);
      }
  /* USER CODE END StartControlLEDM */
}

/* USER CODE BEGIN Header_StartMoveDot */
/**
* @brief Function implementing the MoveDot thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartMoveDot */
void StartMoveDot(void const * argument)
{
  /* USER CODE BEGIN StartMoveDot */
  /* Infinite loop */
  for(;;)
  {
	  //set_snake_direction(direction);
	  //osThreadResume(ControlLEDMHandle);
	  //osThreadSuspend(NULL);
	  //convert_snake_coordinates();

/*
	  //set_snake_direction(direction);

	  //set_snake_direction(DOWN);
	  for(int i = 0; i <= display_size; ++i){
		 // osMutexWait(displayMutexHandle, osWaitForever);
		  set_snake_direction(direction);
		  snake_display[i] = snake_x_coordinate;
		  if(direction == DOWN){
			  snake_display[i] = convert_snake_coordinates();
		  }

		  if(i > 0 && i < 8){
			  snake_display[i - 1] = 0x00;
		  }else if(i == display_size){
  			  snake_display[i] = 0x00;
  		  }
		 // osMutexRelease(displayMutexHandle);
		  osThreadResume(ControlLEDMHandle);
		  osThreadSuspend(NULL);
	  }
*/
  }
  /* USER CODE END StartMoveDot */
}

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM14 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM14) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

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
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
