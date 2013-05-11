#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setdate(uint8_t date)
{
	if(date>31) date = 1;
	date = bin2bcd(date);
	ds1307_regwr(DS1307_REGDATE, date);
}
