#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getyear(void)
{
	uint8_t year;
	year = ds1307_regrd(DS1307_REGYEAR);
	return bcd2bin(year);
}
