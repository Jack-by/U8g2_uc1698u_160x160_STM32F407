#ifndef _U8G_ARM_H
#define _U8G_ARM_H

#include "u8g2.h"
//#include "stm32f1xx_ll_system.h"
#include "main.h"

#define ADDR_CMD_U8G2  (uint8_t*)0x60000000
#define ADDR_DATA_U8G2 (uint8_t*)0x60010000


#define RESET_Pin LL_GPIO_PIN_10
#define RESET_GPIO_Port GPIOA



//*************************************************************************

uint8_t u8x8_gpio_and_delay_template(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_byte_hw_fsmc(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);

#endif


