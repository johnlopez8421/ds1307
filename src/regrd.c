#include <stdio.h>
#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_regrd(uint8_t reg)
{
	uint8_t val;
	twi_start();
	twi_wr(twi_valmakeaddr(DS1307_ADDR, TWI_WR),NULL);
	twi_wr(reg, NULL);
	twi_start();
	twi_wr(twi_valmakeaddr(DS1307_ADDR, TWI_RD),NULL);
	val = twi_rd(NULL);
	twi_stop(); 
	
	return val;
}