#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getmonth(void)
{
	uint8_t month;
	month = ds1307_regrd(DS1307_REGMONTH);
	return bcd2bin(month);
}
