#include <ds1307.h>
#include <twi.h>
#include <util.h>

uint8_t ds1307_get1224(void)
{
	uint8_t val;
	val = ds1307_regrd(DS1307_REGHR);
	return (val & DS1307_12HR);
}