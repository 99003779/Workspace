#ifndef INC_STM32F4XX_GPIO_DRIVER_H_
#define INC_STM32F4XX_GPIO_DRIVER_H_
#include "STM32F4XX.h"
/* GPIO Pin Configuration */
typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PIN_CONFIG_t;
/* INC_STM32407XX_GPIO_DRIVER*/
/* GPIO Handle Structure */
typedef struct
{
	GPIO_Reg_def_t *pGPIOx;
	GPIO_PIN_CONFIG_t PIN_CONGFIG;
}GPIO_HANDLE_t;
/* GPIO Pin Numbers */
#define GPIO_Pin_Number_0	0
#define GPIO_Pin_Number_1	1
#define GPIO_Pin_Number_2	2
#define GPIO_Pin_Number_3	3
#define GPIO_Pin_Number_4	4
#define GPIO_Pin_Number_5	5
#define GPIO_Pin_Number_6	6
#define GPIO_Pin_Number_7	7
#define GPIO_Pin_Number_8	8
#define GPIO_Pin_Number_9	9
#define GPIO_Pin_Number_10	10
#define GPIO_Pin_Number_11	11
#define GPIO_Pin_Number_12	12
#define GPIO_Pin_Number_13	13
#define GPIO_Pin_Number_14	14
#define GPIO_Pin_Number_15	15
/* GPIO Pin Modes */
#define GPIO_Pin_Mode_In		0
#define GPIO_Pin_Mode_Out		1
#define GPIO_Pin_Mode_Altfn		2
#define GPIO_Pin_Mode_Analog	3

/* @GPIO_Pin_Speed
 * GPIO pin possible output speeds
 */
#define GPIO_Pin_Speed_Low		0
#define GPIO_Pin_Speed_Medium	1
#define GPIO_Pin_Speed_Fast		2
#define GPIO_Pin_Speed_High		3
/*
 * GPIO pin pull up and pull down configuration macros
 */
#define GPIO_Pin_No_PUPD	0
#define GPIO_Pin_PU			1
#define GPIO_Pin_PD			2

#define GPIO_Pin_PP		0
#define GPIO_Pin_OD		1
/*
#define GPIO_Pin_AltFunMode_0	0
#define GPIO_Pin_AltFunMode_1	1
#define GPIO_Pin_AltFunMode_2	2
#define GPIO_Pin_AltFunMode_3	3
#define GPIO_Pin_AltFunMode_4	4
#define GPIO_Pin_AltFunMode_5	5
#define GPIO_Pin_AltFunMode_6	6
#define GPIO_Pin_AltFunMode_7	7
#define GPIO_Pin_AltFunMode_8	8
#define GPIO_Pin_AltFunMode_9	9
#define GPIO_Pin_AltFunMode_10	10
#define GPIO_Pin_AltFunMode_11	11
#define GPIO_Pin_AltFunMode_12	12
#define GPIO_Pin_AltFunMode_13	13
#define GPIO_Pin_AltFunMode_14	14
#define GPIO_Pin_AltFunMode_15	15
*/
void GPIO_PeriClockControl(GPIO_Reg_def_t *pGPIOx, uint8_t EnorDi);
void GPIO_Init (GPIO_HANDLE_t *pGPIOHandle);
void GPIO_Default(GPIO_Reg_def_t *pGPIOx);
uint8_t GPIO_ReadFromInputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_Reg_def_t *pGPIOx);
void GPIO_WriteToOutputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber,uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_Reg_def_t *pGPIOx,uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_Reg_def_t *pGPIOx,uint8_t PinNumber);
/*void GPIO_IRQConfig(uint8_t IRQNumber,uint8_t IRQPriority,uint8_t EnorDi);
void GPIO_IRQHandling(uint8_t PinNumber);
*/
#endif /* INC_STM32FXX_GPIO_DRIVER_H_ */
