#include "exercise2.h"

int Red_status = 0;
int Yellow_status = 0;
int Green_status = 1;

int Red_count = 6;
int Yellow_count = 4;
int Green_count = 3;
void exercise2_run(){
	if(Green_status == 1){
		Green_count--;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		if(Green_count <= 0){
			Green_status = 0;
			Green_count = 3;
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
			Red_status = 1;
		}
	}
	if(Red_status == 1){
		Red_count--;
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		if(Red_count <= 0){
			Red_status = 0;
			Red_count = 6;
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			Yellow_status = 1;
		}
	}
	if(Yellow_status == 1){
		Yellow_count--;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		if(Yellow_count <= 0){
			Yellow_status = 0;
			Yellow_count = 4;
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
			Green_status = 1;
		}
	}
}
