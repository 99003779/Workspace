#include <stdint.h>
// this is MCU specific header file

//general macros
#define __vo volatile

#define ENABLE	1
#define DISABLE	0
#define SET		1
#define RESET	0
//macros for different memories

#define SRAM1 		0x20000000U
#define SRAM2 		0x2001C000U

#define FLASH (uint32_t) 		0x08000000U					//(Uint32_t) 0x08000000

#define ROM 		0x1FFF0000U

//macros for bus system
#define BUS_BASE_ADDR 		0x40000000U       ///APB1
#define APB1_BASE_ADDR 		0x40000000U
#define APB2_BASE_ADDR 		0x40010000U
#define AHB1_BASE_ADDR	 	0x40020000U
#define AHB2_BASE_ADDR 		0x50000000U
#define AHB3_BASE_ADDR 		0xA0000000U


//Macros for GPIO
#define GPIOA_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0000)  //0x40020000
#define GPIOB_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0400)  //0400 is offset address
#define GPIOC_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0800)
#define GPIOD_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0C00)
#define GPIOE_BASE_ADDR 	(AHB1_BASE_ADDR + 0x1000)
#define GPIOF_BASE_ADDR 	(AHB1_BASE_ADDR + 0x1400)
#define GPIOG_BASE_ADDR 	(AHB1_BASE_ADDR + 0x1800)
#define GPIOH_BASE_ADDR 	(AHB1_BASE_ADDR + 0x1C00)
#define GPIOI_BASE_ADDR 	(AHB1_BASE_ADDR + 0x2000)
#define GPIOJ_BASE_ADDR 	(AHB1_BASE_ADDR + 0x2400)
#define GPIOK_BASE_ADDR 	(AHB1_BASE_ADDR + 0x2800)
#define CRC_BASE_ADDR 		(AHB1_BASE_ADDR + 0x3000)
#define RCC_BASE_ADDR 		(AHB1_BASE_ADDR + 0x3800)
#define FLASH_INT_REG_BASE_ADDR	 	(AHB1_BASE_ADDR + 0x3C00)
#define BKPSRAM_BASE_ADDR 		(AHB1_BASE_ADDR + 0x4000)
#define DMA1_BASE_ADDR 		(AHB1_BASE_ADDR + 0x6000)
#define DMA2_BASE_ADDR 		(AHB1_BASE_ADDR + 0x6400)
#define ETHERNET_MAC_BASE_ADDR 		(AHB1_BASE_ADDR + 0x8000)
#define DMA2D_BASE_ADDR 		(AHB1_BASE_ADDR + 0xB000)
#define USB_OTG_HS_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0000)


//MACROS FOR PHERIPHERALS HANGING ONTO APB1 BUS
//APB1_BASE_ADDR 		0x40000000U

#define TIM2_BASE_ADDR    		(APB1_BASE_ADDR  + 0x0000)
#define TIM3_BASE_ADDR     		(APB1_BASE_ADDR  + 0x0400)
#define TIM4_BASE_ADDR     		(APB1_BASE_ADDR  + 0x0800)
#define TIM5_BASE_ADDR     		(APB1_BASE_ADDR  + 0x0C00)
#define TIM6_BASE_ADDR     		(APB1_BASE_ADDR  + 0x1000)
#define TIM7_BASE_ADDR     		(APB1_BASE_ADDR  + 0x1400)
#define TIM12_BASE_ADDR    		(APB1_BASE_ADDR  + 0x1800)
#define TIM13_BASE_ADDR    		(APB1_BASE_ADDR  + 0x1C00)
#define TIM14_BASE_ADDR   		(APB1_BASE_ADDR  + 0x2000)
#define DAC_BASE_ADDR      		(APB1_BASE_ADDR  + 0x7400)
#define PWR_BASE_ADDR      		(APB1_BASE_ADDR  + 0x7000)
#define CAN2_BASE_ADDR     		(APB1_BASE_ADDR  + 0x6800)
#define CAN1_BASE_ADDR     		(APB1_BASE_ADDR  + 0x6400)
#define I2C3_BASE_ADDR     		(APB1_BASE_ADDR  + 0x5C00)
#define I2C2_BASE_ADDR     		(APB1_BASE_ADDR  + 0x5800)
#define I2C1_BASE_ADDR    		(APB1_BASE_ADDR  + 0x5400)
#define UART5_BASE_ADDR    		(APB1_BASE_ADDR  + 0x5000)
#define UART4_BASE_ADDR    		(APB1_BASE_ADDR  + 0x4C00)
#define USART3_BASE_ADDR   		(APB1_BASE_ADDR  + 0x4800)
#define USART2_BASE_ADDR   		(APB1_BASE_ADDR  + 0x4400)
#define I2S3EXT_BASE_ADDR  		(APB1_BASE_ADDR  + 0x4000)
#define RTC_BKP_BASE_ADDR  		(APB1_BASE_ADDR  + 0x2800)
#define WWDG_BASE_ADDR   		(APB1_BASE_ADDR  + 0x2C00)
#define IWDG_BASE_ADDR    		(APB1_BASE_ADDR  + 0x3000)
#define I2S2EXT_BASE_ADDR  		(APB1_BASE_ADDR  + 0x3400)
#define SPI2_BASE_ADDR    		(APB1_BASE_ADDR  + 0x3800)
#define SPI3_BASE_ADDR    		(APB1_BASE_ADDR  + 0x3C00)
#define UART8_BASE_ADDR    		(APB1_BASE_ADDR  + 0x7C00)
#define UART7_BASE_ADDR    		(APB1_BASE_ADDR  + 0x7800)


//MACROS FOR PHERIPHERALS HANGING ONTO APB2
//APB2_BASE_ADDR 		0x40010000U

#define TIM1_BASE_ADDR 			(APB2_BASE_ADDR+0x0000)
#define TIM8_BASE_ADDR 			(APB2_BASE_ADDR+0x0400)
#define USART1_BASE_ADDR 		(APB2_BASE_ADDR+1000)
#define USART6_BASE_ADDR 		(APB2_BASE_ADDR+0x1400)
#define ADC1_ADC2_ADC3_BASE_ADDR (APB2_BASE_ADDR+0x2000)
#define SDIO_BASE_ADDR 			(APB2_BASE_ADDR+0x2C00)
#define SPI1_BASE_ADDR 			(APB2_BASE_ADDR+0x3000)
#define SPI4_BASE_ADDR 			(APB2_BASE_ADDR+0x 3400)
#define SYSCFG_BASE_ADDR 		(APB2_BASE_ADDR+0x3800)
#define EXT1_BASE_ADDR 			(APB2_BASE_ADDR + 0x3C00)
#define TIM9_BASE_ADDR 			(APB2_BASE_ADDR + 0x4000)
#define TIM10_BASE_ADDR 		(APB2_BASE_ADDR + 0x4400)
#define TIM11_BASE_ADDR 		(APB2_BASE_ADDR + 0x4800)
#define SPI5_BASE_ADDR 			(APB2_BASE_ADDR + 0x5000)
#define SPI6_BASE_ADDR 			(APB2_BASE_ADDR + 0x5400)
#define SAI1_BASE_ADDR 			(APB2_BASE_ADDR + 0x5800)
#define LCD_TFT_BASE_ADDR 		(APB2_BASE_ADDR + 0x6800)

//GPIO REGISTER DEFINITIONS
typedef struct
{
__vo uint32_t MODER; //+00 offset
__vo uint32_t OTYPER; //+04 offset  [because hexadecimal (increment by 4)]
__vo uint32_t OSPEEDR; //+08 offset
__vo uint32_t PUPDR; //+0C offset
__vo uint32_t IDR; //+10 offset
__vo uint32_t ODR; //+14 offset
__vo uint32_t BSRR; //+18 offset
__vo uint32_t LCKR; //+1C offset
__vo uint32_t AFR[2]; //+20 offset [AFRH and AFRL]

}GPIO_RegDef_t;

//define pointer for structure
//then bring pointer and structure together
#define RCC (RCC_RegDef_t*)RCC_BASE_ADDR  ///0x40023800
//RCC REGISTER DEFINITIONS
typedef struct
{
__vo uint32_t CR; //+00 offset
__vo uint32_t PLLCFGR; //+04 offset  [because hexadecimal (increment by 4)]
__vo uint32_t CFGR; //+08 offset
__vo uint32_t CIR; //+0C offset
__vo uint32_t AHB1RSTR; //+10 offset
__vo uint32_t AHB2RSTR; //+14 offset
__vo uint32_t AHB3RSTR; //+18 offset
uint32_t RESERVED0;
__vo uint32_t APB1RSTR; //+20 offset
__vo uint32_t APB2RSTR; //+24 offset
uint32_t RESERVED1[2];
__vo uint32_t AHB1ENR; //+30 offset
__vo uint32_t AHB2ENR; //+34 offset
__vo uint32_t AHB3ENR; //+38 offset
uint32_t RESERVED2;
__vo uint32_t APB1ENR; //+40 offset
__vo uint32_t APB2ENR; //+44 offset
uint32_t RESERVED3[2];
__vo uint32_t AHB1LPENR; //+50 offset
__vo uint32_t AHB2LPENR; //+54 offset
__vo uint32_t AHB3LPENR; //+58 offset
uint32_t RESERVED4;
__vo uint32_t APB1LPENR; //+60 offset
__vo uint32_t APB2LPENR; //+64 offset
uint32_t RESERVED5[2];
__vo uint32_t BDCR; //+70 offset
__vo uint32_t CSR; //+74 offset
uint32_t RESERVED6[2];
__vo uint32_t SSCGR; //+80 offset
__vo uint32_t PLLI2SCFGR; //+84 offset
__vo uint32_t PLLSAICFGR; //+88 offset
__vo uint32_t DCKCFGR; //+8C offset
}RCC_RegDef_t;

//define pointer for structure
//then bring pointer and structure together

//MACROS FOR GPIO POINTER STRUCTURE
#define GPIOA (GPIO_RegDef_t *)GPIOA_BASE_ADDR
#define GPIOB (GPIO_RegDef_t *)GPIOB_BASE_ADDR
#define GPIOC (GPIO_RegDef_t *)GPIOC_BASE_ADDR
#define GPIOD (GPIO_RegDef_t *)GPIOD_BASE_ADDR
#define GPIOE (GPIO_RegDef_t *)GPIOE_BASE_ADDR
#define GPIOF (GPIO_RegDef_t *)GPIOF_BASE_ADDR
#define GPIOG (GPIO_RegDef_t *)GPIOG_BASE_ADDR
#define GPIOH (GPIO_RegDef_t *)GPIOH_BASE_ADDR
#define GPIOI (GPIO_RegDef_t *)GPIOI_BASE_ADDR
#define GPIOJ (GPIO_RegDef_t *)GPIOJ_BASE_ADDR
#define GPIOK (GPIO_RegDef_t *)GPIOK_BASE_ADDR


//MACROS FOR ENABLING THE CLOCK FOR GPIOS
#define GPIOA_PCLOCK_ENABLE  (RCC-> (1<<0))
#define GPIOB_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<1))
#define GPIOC_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<2))
#define GPIOD_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<3))
#define GPIOE_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<4))
#define GPIOF_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<5))
#define GPIOG_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<6))
#define GPIOH_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<7))
#define GPIOI_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<8))
#define GPIOJ_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<9))
#define GPIOK_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR = (1<<10))


//MACROS FOR DISABLING THE CLOCK FOR GPIOS
#define GPIOA_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<0))
#define GPIOB_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<1))
#define GPIOC_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<2))
#define GPIOD_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<3))
#define GPIOE_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<4))
#define GPIOF_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<5))
#define GPIOG_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<6))
#define GPIOH_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<7))
#define GPIOI_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<8))
#define GPIOJ_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<9))
#define GPIOK_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR = ~(1<<10))








