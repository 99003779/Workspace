/*
 * STM32F4XX.h_GPIO_driver.c
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003779
 */
#include "STM32F4XX.h"
#include "STM32F4XX_GPIO_driver.h"

//creating API Prototype
// I.	peripheral clock enable or disable
void GPIO_PeripheralClk(GPIO_RegDef_t *pGPIOx, uint8_t ENorDI)
{
	if (ENorDI == ENABLE)
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOB)
		{
			GPIOB_PCLOCK_ENABLE;
		} //to do
		else if (pGPIOx == GPIOC)
		{
			GPIOC_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOD)
		{
			GPIOD_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOE)
		{
			GPIOE_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOF)
		{
			GPIOF_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOG)
		{
			GPIOG_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOH)
		{
			GPIOH_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOI)
		{
			GPIOI_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOJ)
		{
			GPIOJ_PCLOCK_ENABLE;
		}
		else if (pGPIOx == GPIOK)
		{
			GPIOK_PCLOCK_ENABLE;
		}
	else if (ENorDI == DISABLE)
		if (pGPIOx == GPIOA)
		{
			GPIOA_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOB)
		{
			GPIOB_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOC)
		{
			GPIOC_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOD)
		{
			GPIOD_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOE)
		{
			GPIOE_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOF)
		{
			GPIOF_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOG)
		{
			GPIOG_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOH)
		{
			GPIOH_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOI)
		{
			GPIOI_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOJ)
		{
			GPIOJ_PCLOCK_DISABLE;
		}
		else if (pGPIOx == GPIOK)
		{
			GPIOK_PCLOCK_DISABLE;
		}
	}
}
// II. Initialization and deinit.
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
	//configuring the pin mode
	uint32_t Temp;
	Temp = (pGPIOHandle ->pin_config -> GPIO_PinMode) << (2*pGPIOHandle->pin_config -> GPIO_PinNum);
	pGPIOHandle ->pGPIOx -> MODER =~(0x3 << (2*pGPIOHandle ->pin_config ->GPIO_PinNum));  //for clearing
	pGPIOHandle -> pGPIOx -> MODER = temp;

	//configuring the OTYPER
	uint16_t Temp;
	Temp = (pGPIOHandle ->pin_config ->GPIO_OType)<<(pGPIOHandle->pin_config->GPIO_PinNum);
	pGPIOHandle -> pGPIOx ->OTYPER =~(0x3)<<(2*pGPIOHandle->pin_config->GPIO_PinNum);
	pGPIOHandle ->pGPIOx->OTYPER = Temp;

	//3 Config the PuPd
uint32_t result;
	result = (pGPIOHandle->pin_config ->)<<(pGPIOHandle->pin_config->GPIO_PinNum);

	//4


	//Config Alternative function
	uint32_t temp1, temp2;
	temp1= pGPIOHandle ->pin_config->GPIO_PinNum/8
	temp2 = pGPIOHandle -> pin_config->GPIO_PinNum % 8;

	pGPIOHandle ->pin_config->GPIO_FnMode[temp1]=~(0xf) << (4 * temp2);
	pGPIOHandle ->pin_config->GPIO_FnMode[temp1]= pGPIOHandle ->pin_config->GPIO_FnMode << (4 * temp2);






	void GPIO_Deinit(GPIO_RegDef_t *PGPIOx);

//III. Read/Write to/from port/pin
uint16_t GPIO_ReadFromPort(GPIO_RegDef_t *pGPIOx)
{
	uint16_t temp = 0;
	temp = pGPIOx ->IDR;
	return temp;
}
uint8_t GPIO_ReadFromPin(GPIO_RegDef_t *pGPIOx, uint8_t GPIO_PinNum)
{
	uint8_t dummy = 0;
	dummy = (uint8_t)(pGPIOx ->IDR >> GPIO_PinNum & 0x00000001); //right shift, bring it to zeroth bit
	return dummy;
}
void GPIO_WriteToPort(GPIO_RegDef_t *pGPIOx, uint16_t value)
{
	pGPIOx ->ODR = value;
}
void GPIO_WriteToPin(GPIO_RegDef_t *pGPIOx, uint8_t GPIO_PinNum,uint16_t value)
{
	if(value==SET)
	{
		pGPIOx ->ODR |= 1<<GPIO_PinNum;
	}
	else
	{
		pGPIOx -> ODR &= ~(1<<GPIO_PinNum);
	}
}
void GPIO_Toggle(GPIO_RegDef_t *pGPIO, uint8_t value)
{
	pGPIOx ->ODR ^= (1);
}

