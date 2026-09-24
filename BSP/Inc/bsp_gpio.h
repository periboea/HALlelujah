#ifndef BSP_GPIO_H
#define BSP_GPIO_H

#include "stm32f4xx_hal.h"

void BSP_GPIO_Init(void);
void BSP_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
GPIO_PinState BSP_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void BSP_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif
