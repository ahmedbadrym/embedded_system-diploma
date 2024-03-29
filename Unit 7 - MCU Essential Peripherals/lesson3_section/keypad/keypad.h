/*
 * int.h
 *
 *  Created on: Aug 26, 2023
 *      Author: THE GHOST
 */

#ifndef HAL_KEYPAD_INT_H_
#define HAL_KEYPAD_INT_H_
#include "int.h"
#include "stm32f103c6.h"
#define KEYPAD_PORT GPIOB

#define R0 GPIO_PIN_0
#define R1 GPIO_PIN_1
#define R2 GPIO_PIN_3
#define R3 GPIO_PIN_4
#define C0 GPIO_PIN_5
#define C1 GPIO_PIN_6
#define C2 GPIO_PIN_7
#define C3 GPIO_PIN_8


void Keypad_init();
char Keypad_getkey();

#endif /* HAL_KEYPAD_INT_H_ */
