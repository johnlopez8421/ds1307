#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_sethr(uint8_t hour)
{
	if(hour>23) hour = 0;
	
	if(hour>12)
	{
		if(ds1307_get1224() == DS1307_12HR)
		{
			hour -= 12;
		}
	}
	hour = bin2bcd(hour);
	ds1307_regwr(DS1307_REGHR, hour);
}