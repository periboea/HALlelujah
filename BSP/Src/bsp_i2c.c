#include "bsp_i2c.h"
#include "i2c.h"

void BSP_I2C_Init(void)
{
    MX_I2C1_Init();
}

HAL_StatusTypeDef BSP_I2C_Write(uint16_t devAddr, uint8_t *pData, uint16_t size)
{
    return HAL_I2C_Master_Transmit(&hi2c1, devAddr, pData, size, HAL_MAX_DELAY);
}

HAL_StatusTypeDef BSP_I2C_Read(uint16_t devAddr, uint8_t *pData, uint16_t size)
{
    return HAL_I2C_Master_Receive(&hi2c1, devAddr, pData, size, HAL_MAX_DELAY);
}

HAL_StatusTypeDef BSP_I2C_IsDeviceReady(uint16_t devAddr, uint32_t trials)
{
    return HAL_I2C_IsDeviceReady(&hi2c1, devAddr, trials, HAL_MAX_DELAY);
}
