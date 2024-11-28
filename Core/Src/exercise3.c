#include "exercise3.h"

int red_status = 1;
int yellow_status = 0;
int green_status = 0;

int red_status_1 = 0;
int yellow_status_1 = 0;
int green_status_1 = 1;

int red_count = 6;
int yellow_count = 4;
int green_count = 3;

int red_1_count = 6;
int yellow_1_count = 4;
int green_1_count = 3;

void exercise3_run(){
	//Den giao thong ben nay sang
	if(red_status == 1)
	{
		red_count--;
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		if(red_count <= 0){
			red_status = 0;
			red_count = 6;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			green_status = 1;
		}
	}
	if(green_status == 1)
	{
		green_count--;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		if(green_count <= 0){
			green_status = 0;
			green_count = 3;
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
			yellow_status = 1;
		}
	}
	if(yellow_status == 1)
	{
		yellow_count--;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		if(yellow_count <= 0){
			yellow_status = 0;
			yellow_count = 4;
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
			red_status = 1;
		}
	}
	//Den ben kia sang
	if(green_status_1 == 1)
	{
		green_1_count--;
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		if(green_1_count <= 0){
			green_status_1 = 0;
			green_1_count = 3;
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
			yellow_status_1 = 1;
		}
	}
	if(yellow_status_1 == 1)
	{
		yellow_1_count--;
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		if(yellow_1_count <= 0){
			yellow_status_1 = 0;
			yellow_1_count = 4;
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
			red_status_1 = 1;
		}
	}
	if(red_status_1 == 1)
	{
		red_1_count--;
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		if(red_1_count <= 0){
			red_status = 0;
			red_1_count = 6;
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
			green_status_1 = 1;
		}
	}
}
