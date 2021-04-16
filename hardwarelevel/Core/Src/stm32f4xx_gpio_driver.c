#include"STM32F4XX_GPIO_DRIVER.h"

void GPIO_PeriClockControl(GPIO_Reg_def_t *pGPIOx, uint8_t EnorDi)
{
	if(EnorDi == ENABLE)
	{
		if(pGPIOx==GPIOA)
		{
			GPIOA_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOB)
		{
			GPIOB_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOC)
		{
			GPIOC_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOD)
		{
			GPIOD_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOE)
		{
			GPIOE_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOF)
		{
			GPIOF_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOG)
		{
			GPIOG_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOH)
		{
			GPIOH_PCLOCK_EN();
		}
		else if(pGPIOx==GPIOI)
		{
			GPIOI_PCLOCK_EN();
		}
	}
	else
	{
		if(pGPIOx==GPIOA)
				{
					GPIOA_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOB)
				{
					GPIOB_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOC)
				{
					GPIOC_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOD)
				{
					GPIOD_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOE)
				{
					GPIOE_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOF)
				{
					GPIOF_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOG)
				{
					GPIOG_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOH)
				{
					GPIOH_PCLOCK_DI();
				}
				else if(pGPIOx==GPIOI)
				{
					GPIOI_PCLOCK_DI();
				}
	}
}

void GPIO_Init (GPIO_HANDLE_t *pGPIOHandle)
{
	//1.Configuring the mode
	uint32_t temp=0;
	if((pGPIOHandle->PIN_CONGFIG.GPIO_PinMode)<=GPIO_Pin_Mode_Analog)
	{
		temp = pGPIOHandle->PIN_CONGFIG.GPIO_PinMode << (2*pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber);
		pGPIOHandle->pGPIOx->MODER |= temp;
	}


	//2.Configuring the speed
		temp=0;
		temp = pGPIOHandle->PIN_CONGFIG.GPIO_PinSpeed << (2*pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber);
		pGPIOHandle->pGPIOx->OSPEEDR |= temp;
		//3.Configuring output type
		temp=0;
		temp = pGPIOHandle->PIN_CONGFIG.GPIO_PinOPType << (pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber);
		pGPIOHandle->pGPIOx->OTYPER |= temp;
		//4.Configuring pin PuPd Control
		temp=0;
		temp = pGPIOHandle->PIN_CONGFIG.GPIO_PinPuPdControl<< (2*pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber);
		pGPIOHandle->pGPIOx->PUPDR |= temp;
		//5. Alternate Functions
		if(pGPIOHandle->PIN_CONGFIG.GPIO_PinMode==GPIO_Pin_Mode_Altfn)
		{
		uint32_t temp1=0;
		uint32_t temp2=0;
		temp1 = pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber/8;
		temp2 = pGPIOHandle->PIN_CONGFIG.GPIO_PinNumber%8;
	    pGPIOHandle->pGPIOx->AFR[temp1]|=pGPIOHandle->PIN_CONGFIG.GPIO_PinAltFunMode<<(4*temp2);
		}
	}

uint8_t GPIO_ReadFromInputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber)
{
	uint8_t value;
	value = (uint8_t) (pGPIOx->IDR>>PinNumber)*(0X00000001);
	return value;
}
uint16_t GPIO_ReadFromInputPort(GPIO_Reg_def_t *pGPIOx)
{
	uint16_t value1;
	value1 = (uint16_t)(pGPIOx->IDR);
	return value1;
}


void GPIO_WriteToOutputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber,uint8_t Value)
{
	if(Value==GPIO_Pin_Set)
	{
		pGPIOx->ODR|=(1<<PinNumber);
	}
	else
	{
		pGPIOx->ODR&=~(1<<PinNumber);
	}
}


void GPIO_WriteToOutputPort(GPIO_Reg_def_t *pGPIOx,uint16_t Value)
{
	pGPIOx->ODR = Value;
}
void GPIO_ToggleOutputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber)
{
	pGPIOx->ODR = pGPIOx->ODR^(1<<PinNumber);
}
