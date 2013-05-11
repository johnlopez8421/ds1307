#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getdate(void)
{
	uint8_t date;
	date = ds1307_regrd(DS1307_REGDATE);
	return bcd2bin(date);
}
