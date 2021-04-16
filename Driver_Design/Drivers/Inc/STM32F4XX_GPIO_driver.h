#include "STM32F4XX.h"

//creating handle structure


//Creating the structure for GPIO_PinConfig
typedef struct
{
	uint8_t GPIO_PinNum;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_Speed;
	uint8_t GPIO_OType; //Output type
	uint8_t GPIO_PuPd; //pullup or pull down
	uint8_t GPIO_FnMode;  //alternate Functions
}GPIO_PinConfig_t;

typedef struct
{
	GPIO_RegDef_t *pGPIOx;	//declared a pointer variable of GPIO_RegDef_t type

	GPIO_PinConfig_t pin_config;  //declaring the variable for pin configuration of the structure type GPIO_PinConfig

}GPIO_Handle_t;

//creating API Prototype
// I.	peripheral clock enable or disable
void GPIO_PeripheralClk(GPIO_RegDef_t *pGPIOx, uint8_t ENorDI);

// II. Initialization and deinit.
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_Deinit(GPIO_RegDef_t *PGPIOx);

//III. Read/Write to/from port/pin
uint16_t GPIO_ReadFromPort(GPIO_RegDef_t *pGPIOx);
uint8_t GPIO_ReadFromPin(GPIO_RegDef_t *pGPIOx, uint8_t GPIO_PinNum);
void GPIO_WriteToPort(GPIO_RegDef_t *pGPIOx, uint16_t value);
void GPIO_WriteToPin(GPIO_RegDef_t *pGPIOx, uint8_t GPIO_PinNum,uint16_t value);
void GPIO_Toggle(GPIO_RegDef_t *pGPIO, uint8_t value);


//Defining Macros for GPIO_PinNum
#define GPIO_PinNum_0		0
#define GPIO_PinNum_1		1
#define GPIO_PinNum_2		2
#define GPIO_PinNum_3		3
#define GPIO_PinNum_4		4
#define GPIO_PinNum_5		5
#define GPIO_PinNum_6		6
#define GPIO_PinNum_7		7
#define GPIO_PinNum_8		8
#define GPIO_PinNum_9		9
#define GPIO_PinNum_10		10
#define GPIO_PinNum_11		11
#define GPIO_PinNum_12		12
#define GPIO_PinNum_13		13
#define GPIO_PinNum_14		14
#define GPIO_PinNum_15		15

//Defining Macros for GPIO_PinMode
#define GPIO_Pin_Mode_0		0
#define GPIO_Pin_Mode_1		1
#define GPIO_Pin_Mode_2		2
#define GPIO_Pin_Mode_3		3

//Defining Macros for GPIO_Speed
#define GPIO_Speed_0		0
#define GPIO_Speed_1		1
#define GPIO_Speed_2		2
#define GPIO_Speed_3		3

//Defining Macros for GPIO_OType
#define GPIO_O_Type_0		0
#define GPIO_O_Type_1		1
#define GPIO_O_Type_2		2

//Defining Macros for GPIO_PuPd
#define GPIO_Pu_Pd_0		0
#define GPIO_Pu_Pd_1		1
#define GPIO_Pu_Pd_2		2

//Defining Macros for GPIO_FnMode
#define GPIO_Fn_Mode_0		0
#define GPIO_Fn_Mode_1		1
#define GPIO_Fn_Mode_2		2
#define GPIO_Fn_Mode_3		3
#define GPIO_Fn_Mode_4		4
#define GPIO_Fn_Mode_5		5
#define GPIO_Fn_Mode_6		6
#define GPIO_Fn_Mode_7		7
#define GPIO_Fn_Mode_8		8
#define GPIO_Fn_Mode_9		9
#define GPIO_Fn_Mode_10		10
#define GPIO_Fn_Mode_11		11
#define GPIO_Fn_Mode_12		12
#define GPIO_Fn_Mode_13		13
#define GPIO_Fn_Mode_14		14
#define GPIO_Fn_Mode_15		15
#define GPIO_Fn_Mode_16		16
#define GPIO_Fn_Mode_17		17
#define GPIO_Fn_Mode_18		18


/*
 * STM32F4XX.h_GPIO_driver.h
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003779
 */

#ifndef INC_STM32F4XX_GPIO_DRIVER_H_  //guard bands
#define INC_STM32F4XX_GPIO_DRIVER_H_     //guard bands



#endif /* INC_STM32F4XX_GPIO_DRIVER_H_ */    //guard bands
