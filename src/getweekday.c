#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_getweekday(void)
{
	return ds1307_regrd(DS1307_REGDAY);
}