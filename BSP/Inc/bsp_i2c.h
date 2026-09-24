#ifndef BSP_I2C_H
#define BSP_I2C_H

#include "stm32f4xx_hal.h"

void     BSP_I2C_Init(void);
HAL_StatusTypeDef BSP_I2C_Write(uint16_t devAddr, uint8_t *pData, uint16_t size);
HAL_StatusTypeDef BSP_I2C_Read(uint16_t devAddr, uint8_t *pData, uint16_t size);
HAL_StatusTypeDef BSP_I2C_IsDeviceReady(uint16_t devAddr, uint32_t trials);

#endif
