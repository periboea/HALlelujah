#include "bsp_uart.h"
#include "usart.h"

void BSP_UART_Init(void)
{
    MX_USART2_UART_Init();
}

HAL_StatusTypeDef BSP_UART_Send(uint8_t *pData, uint16_t size)
{
    return HAL_UART_Transmit(&huart2, pData, size, HAL_MAX_DELAY);
}

HAL_StatusTypeDef BSP_UART_Receive(uint8_t *pData, uint16_t size)
{
    return HAL_UART_Receive(&huart2, pData, size, HAL_MAX_DELAY);
}
