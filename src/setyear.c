#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setyear(uint8_t year)
{
	year = bin2bcd(year);
	ds1307_regwr(DS1307_REGYEAR, year);
}
