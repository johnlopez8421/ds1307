#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setmin(uint8_t min)
{
	if(min>59) min = 0;
	min = bin2bcd(min);
	ds1307_regwr(DS1307_REGMIN, min);
}