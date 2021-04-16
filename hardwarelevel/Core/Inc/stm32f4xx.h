
#ifndef INC_STM32F4XX_H_
#define INC_STM32F4XX_H_
#include<stdint.h>

#define __vo volatile
/* Defining macros for the various memories */
#define FLASH_ADDR   0X08000000U
#define SRAM1_ADDR   0X20000000U
#define SRAM2_ADDR   0X2001C000U
#define ROM_ADDR     0X1FFF0000
#define SRAM_ADDR	 SRAM1_ADDR

/* Defining macros for buses */
#define AHB1_BASE_ADDR   0X40020000U
#define AHB2_BASE_ADDR   0X50000000U
#define APB1_BASE_ADDR   0X40000000U
#define APB2_BASE_ADDR   0X40010000U
#define PER1_BASE_ADDR   APB1_BASE_ADDR
/* Defining macros for peripherals hanging onto AHB1 Bus*/
#define GPIOA_BASE_ADDR  (AHB1_BASE_ADDR + (0X0000U))
#define GPIOB_BASE_ADDR  (AHB1_BASE_ADDR + (0X0400U))
#define GPIOC_BASE_ADDR  (AHB1_BASE_ADDR + (0X0800U))
#define GPIOD_BASE_ADDR  (AHB1_BASE_ADDR + (0X0C00U))
#define GPIOE_BASE_ADDR  (AHB1_BASE_ADDR + (0X1000U))
#define GPIOF_BASE_ADDR  (AHB1_BASE_ADDR + (0X1400U))
#define GPIOG_BASE_ADDR  (AHB1_BASE_ADDR + (0X1800U))
#define GPIOH_BASE_ADDR  (AHB1_BASE_ADDR + (0X1C00U))
#define GPIOI_BASE_ADDR  (AHB1_BASE_ADDR + (0X2000U))
#define RCC_BASE_ADDR    (AHB1_BASE_ADDR + (0X3800U))
/* Defining macros for peripherals hanging onto AHB2 Bus - None*/
/* Defining macros for peripherals hanging onto APB1 Bus*/
#define SPI2_BASE_ADDR   (APB1_BASE_ADDR + (0X3800U))
#define SPI3_BASE_ADDR   (APB1_BASE_ADDR + (0X3C00U))
#define UART4_BASE_ADDR  (APB1_BASE_ADDR + (0X4C00U))
#define UART5_BASE_ADDR  (APB1_BASE_ADDR + (0X5000U))
#define I2C1_BASE_ADDR   (APB1_BASE_ADDR + (0X5400U))
#define I2C2_BASE_ADDR   (APB1_BASE_ADDR + (0X5800U))
#define I2C3_BASE_ADDR   (APB1_BASE_ADDR + (0X5C00U))
#define USART2_BASE_ADDR (APB1_BASE_ADDR + (0X4400U))
#define USART3_BASE_ADDR (APB1_BASE_ADDR + (0X4800U))
/* Defining macros for peripherals hanging onto APB2 Bus*/
#define SPI1_BASE_ADDR     (APB2_BASE_ADDR + (0X3000U))
#define USART1_BASE_ADDR   (APB2_BASE_ADDR + (0X1000U))
#define USART6_BASE_ADDR   (APB2_BASE_ADDR + (0X1400U))
/* GPIO Peripheral Registers */
typedef struct
{
	__vo uint32_t MODER;
	__vo uint32_t OTYPER;
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFR[2];//AFR[0] - AFRL, AFR[1] - AFRH
}GPIO_Reg_def_t;
/* RCC Peripheral Registers */
typedef struct
{
	__vo uint32_t RCC_CR;
	__vo uint32_t RCC_PLLCFGR;
	__vo uint32_t RCC_CFGR;
	__vo uint32_t RCC_CIR;
	__vo uint32_t RCC_AHB1RSTR;
	__vo uint32_t RCC_AHB2RSTR;
	__vo uint32_t RCC_AHB3RSTR;
	uint32_t RESERVED0;
	__vo uint32_t RCC_APB1RSTR;
	__vo uint32_t RCC_APB2RSTR;
	uint32_t RESERVED1[2];
	__vo uint32_t RCC_AHB1ENR;
	__vo uint32_t RCC_AHB2ENR;
	__vo uint32_t RCC_AHB3ENR;
	uint32_t RESERVED2;
	__vo uint32_t RCC_APB1ENR;
	__vo uint32_t RCC_APB2ENR;
	uint32_t RESERVED3[2];
	__vo uint32_t RCC_AHB1LPENR;
	__vo uint32_t RCC_AHB2LPENR;
	__vo uint32_t RCC_AHB3LPENR;
	uint32_t RESERVED4;
	__vo uint32_t RCC_APB1LPENR;
	__vo uint32_t RCC_APB2LPENR;
	uint32_t RESERVED5[2];
	__vo uint32_t RCC_BDCR;
	__vo uint32_t RCC_CSR;
	uint32_t RESERVED6[2];
	__vo uint32_t RCC_SSCGR;
	__vo uint32_t RCC_PLLI2SCFGR;
	__vo uint32_t RCC_PLLSAICFGR;
	__vo uint32_t RCC_DCKCFGR;
}RCC_Reg_def_t;
/* GPIO Peripheral Sections */
#define GPIOA ((GPIO_Reg_def_t*)GPIOA_BASE_ADDR)
#define GPIOB ((GPIO_Reg_def_t*)GPIOB_BASE_ADDR)
#define GPIOC ((GPIO_Reg_def_t*)GPIOC_BASE_ADDR)
#define GPIOD ((GPIO_Reg_def_t*)GPIOD_BASE_ADDR)
#define GPIOE ((GPIO_Reg_def_t*)GPIOE_BASE_ADDR)
#define GPIOF ((GPIO_Reg_def_t*)GPIOF_BASE_ADDR)
#define GPIOG ((GPIO_Reg_def_t*)GPIOG_BASE_ADDR)
#define GPIOH ((GPIO_Reg_def_t*)GPIOH_BASE_ADDR)
#define GPIOI ((GPIO_Reg_def_t*)GPIOI_BASE_ADDR)
#define RCC 	((RCC_Reg_def_t*)RCC_BASE_ADDR)
/* GPIO Clock Enable */
#define GPIOA_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<0))
#define GPIOB_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<1))
#define GPIOC_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<2))
#define GPIOD_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<3))
#define GPIOE_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<4))
#define GPIOF_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<5))
#define GPIOG_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<6))
#define GPIOH_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<7))
#define GPIOI_PCLOCK_EN()   (RCC->RCC_AHB1ENR |= (1<<8))
/* GPIO Peripheral Clock Disable Macros */
#define GPIOA_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<0));}
#define GPIOB_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<1));}
#define GPIOC_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<2));}
#define GPIOD_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<3));}
#define GPIOE_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<4));}
#define GPIOF_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<5));}
#define GPIOG_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<6));}
#define GPIOH_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<7));}
#define GPIOI_PCLOCK_DI()	 {(RCC->RCC_AHB1RSTR&=~(1<<8));}
/*Other Macro Definitions */
#define ENABLE 		1
#define DISABLE		0
#define GPIO_Pin_Set	ENABLE
#define GPIO_Pin_Reset	DISABLE


#endif /* INC_STM32F4XX_H_ */
