#include "exercise5.h"



void exercise5_run(){
	//Den o nhom 1

	int red1 = 1;
	int green1 = 0;
	int yellow1 = 0;

	int red1c = 5;
	int green1c = 3;
	int yellow1c = 2;

	int red2 = 0;
	int green2 = 1;
	int yellow2 = 0;

	int red2c = 5;
	int green2c = 3;
	int yellow2c = 2;

	HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin
	                          |LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin
	                      , GPIO_PIN_SET);
	if(red1 == 1)
	{
		display7SEG1(red1c);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
		if(red1c <= 0){
			red1 = 0;
			red1c = 5;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			green1 = 1;
		}
		red1c--;
	}
	if(green1 == 1)
	{
		display7SEG1(green1c);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
		if(green1c <= 0){
			green1 = 0;
			green1c = 3;
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
			yellow1 = 1;
		}
		green1c--;
	}
	if(yellow1 == 1)
	{
		display7SEG1(yellow1c);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
		if(yellow1c <= 0){
			yellow1 = 0;
			yellow1c = 2;
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
			red1 = 1;
		}
		yellow1c--;
	}
	//Den o nhom 2:
	if(green2 == 1)
		{
			display7SEG2(green2c);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
			if(green2c <= 0){
				green2 = 0;
				green2c = 3;
				HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
				yellow2 = 1;
			}
			green2c--;
		}
	if(yellow2 == 1)
		{
			display7SEG2(yellow2c);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
			if(yellow2c <= 0){
				yellow2 = 0;
				yellow2c = 2;
				HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
				red2 = 1;
			}
			yellow2c--;
		}
	if(red2 == 1)
		{
			display7SEG2(red2c);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
			if(red2c <= 0){
				red2 = 0;
				red2c = 5;
				HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
				green2 = 1;
			}
			red2c--;
		}
}
