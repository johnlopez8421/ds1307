#include <stdio.h>
#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_regwr(uint8_t reg, uint8_t data)
{
	twi_start();
	twi_wr(twi_valmakeaddr(DS1307_ADDR, TWI_WR), NULL);
	twi_wr(reg, NULL);
	twi_wr(data, NULL);
	twi_stop();
}