#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getsec(void)
{
	uint8_t sec;
	sec = ds1307_regrd(DS1307_REGSEC);
	sec &= ~DS1307_CLKHALT;
	return bcd2bin(sec);
	
}