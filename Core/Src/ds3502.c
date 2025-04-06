/*
 * ds3502.c
 *
 *  Created on: Mar 30, 2025
 *      Author: user
 */

#include "ds3502.h"

void SetPotWiper(uint8_t *_pot_wiper)
{
	uint8_t mode_1_wr = 0x80;
	HAL_I2C_Mem_Write(DS3502_I2C_HANDLE, DS3502_I2C_ADDRESS, 0x02, 1,
			&mode_1_wr, 1, 10);
	HAL_Delay(1);
	if ((*_pot_wiper >= 0) && (*_pot_wiper <= 127))
	{
		HAL_I2C_Mem_Write(DS3502_I2C_HANDLE, DS3502_I2C_ADDRESS, 0x00, 1,
				_pot_wiper, 1, 10);
	}
}

void SetAndStorePotWiper(uint8_t *_pot_wiper)
{
	uint8_t mode_1_wr_ivr = 0x00;
	HAL_I2C_Mem_Write(DS3502_I2C_HANDLE, DS3502_I2C_ADDRESS, 0x02, 1,
			&mode_1_wr_ivr, 1, 10);
	HAL_Delay(1);
	if ((*_pot_wiper >= 0) && (*_pot_wiper <= 127))
	{
		HAL_I2C_Mem_Write(DS3502_I2C_HANDLE, DS3502_I2C_ADDRESS, 0x00, 1,
				_pot_wiper, 1, 10);
	}
}
