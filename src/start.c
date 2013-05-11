#include <stdio.h>
#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_start(void)
{
	uint8_t val;
	val = ds1307_regrd(DS1307_REGSEC);
	val &= ~DS1307_CLKHALT;
	ds1307_regwr(DS1307_REGSEC, val);
}
