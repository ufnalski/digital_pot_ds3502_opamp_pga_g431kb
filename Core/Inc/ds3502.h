/*
 * ds3502.h
 *
 *  Created on: Mar 30, 2025
 *      Author: user
 */

#ifndef INC_DS3502_H_
#define INC_DS3502_H_

#include "main.h"
#include "i2c.h"

#define DS3502_I2C_ADDRESS	0x50
#define DS3502_I2C_HANDLE	&hi2c1

void SetPotWiper(uint8_t *_pot_wiper);
void SetAndStorePotWiper(uint8_t *_pot_wiper);

#endif /* INC_DS3502_H_ */
