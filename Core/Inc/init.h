#include <stdint.h>
#include "../../CMSIS/Devices/stm32f4xx.h"
#include "../../CMSIS/Devices/stm32f429xx.h"

#define RCC_GPIOB_ON *(uint32_t *)(0x40023800UL + 0x30UL) |= 0x02
#define RCC_GPIOC_ON *(uint32_t *)(0x40023800UL + 0x30UL) |= 0x04

#define GPIOB_MODER_OUT *(uint32_t *)(0x40020400UL + 0x00UL) |= 0x4000
#define GPIOB_OSPEEDR_Medium *(uint32_t *)(0x40020400UL + 0x08UL) |= 0x4000
#define GPIOB_BSRR_PIN7_Reset *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x800000
#define GPIOB_BSRR_PIN7_Set *(uint32_t *)(0x40020400UL + 0x18UL) |= 0x80

#define GPIOC_IDR_PIN13 *(uint32_t *)(0x40020800UL + 0x10UL)
#define PIN13 0x2000

#define READ_BIT(REG, BIT) ((REG) & (BIT))
#define SET_BIT_SELF(REG, BIT) ((REG) & (BIT))

void GPIO_Ini_Self_Def(void);
void GPiO_Ini_CMSIS(void);