#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_gethr(void)
{
	uint8_t hr;
	hr = ds1307_regrd(DS1307_REGHR);
	if(hr & DS1307_12HR)
	{
		hr &= DS1307_HRMASK12;
	}
	else
	{
		hr &= DS1307_HRMASK24;
	}
	
	return bcd2bin(hr);
}
