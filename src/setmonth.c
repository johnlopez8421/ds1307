#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setmonth(uint8_t month)
{
	if(month>12) month = 1;
	month = bin2bcd(month);
	ds1307_regwr(DS1307_REGMONTH, month);
}
