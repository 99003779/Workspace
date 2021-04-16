/*
 * led_blink.c
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003779
 */
#include "STM32F4XX.h"
#include "STM32F4XX_GPIO_driver.h"

void delay()
{
	for(uint32_t i=0; i<500000;i++)
}
int main(void)
{
	GPIO_Handle_t GPIO_Led;
	GPIO_Led.pGPIOx = GPIOD;
	GPIO_Led.pin_config->GPIO_PinNum=GPIO_PinNum_12;
	GPIO_Led.pin_config->GPIO_PinMode=GPIO_PinMode_out;
	GPIO_Led.pin_config->GPIO_Speed = GPIO_speed_med;
	GPIO_Led.pin_config->GPIO_OType = GPIO_OType_pp;
	GPIO_Led.pin_config->GPIO_PuPd = GPIO_pupd_pu;
	GPIO_peripheralClk (GPIOD, ENABLE);
	GPIO_Init(&GPIOD_Led)

	while (1)
	{
		GPIO_Toggle (GPIOD, GPIO_PinNum_12);
		delay();

	}
}
