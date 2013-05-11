#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getampm(void)
{
	uint8_t ampm;
	ampm = ds1307_regrd(DS1307_REGHR);
	if(ampm & DS1307_12HR)
	{
		return ampm & DS1307_PM;
	}
	
	ampm = bcd2bin(ampm);
	if(ampm>12)
	{
		return DS1307_PM;
	}
	else
	{
		return DS1307_AM;
	}
}
