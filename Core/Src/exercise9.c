#include "exercise9.h"
void clearNumberOnClock(int num){
	if(num == 0) HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_SET);
	if(num == 1) HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	if(num == 2) HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	if(num == 3) HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	if(num == 4) HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_SET);
	if(num == 5) HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_SET);
	if(num == 6) HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
	if(num == 7) HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
	if(num == 8) HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
	if(num == 9) HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
	if(num == 10) HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
	if(num == 11) HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
}