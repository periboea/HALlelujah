#ifndef BSP_UART_H
#define BSP_UART_H

#include "stm32f4xx_hal.h"

void BSP_UART_Init(void);
HAL_StatusTypeDef BSP_UART_Send(uint8_t *pData, uint16_t size);
HAL_StatusTypeDef BSP_UART_Receive(uint8_t *pData, uint16_t size);

#endif
