#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getmin(void)
{
	uint8_t min;
	min = ds1307_regrd(DS1307_REGMIN);
	return bcd2bin(min);
}