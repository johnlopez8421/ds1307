#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setweekday(uint8_t weekday)
{
	if(weekday >7) weekday = 1;
	ds1307_regwr(DS1307_REGDAY, weekday);
}
