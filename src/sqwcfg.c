#include <stdio.h>
#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_sqwcfg(uint8_t flags)
{
	ds1307_regwr(DS1307_REGCTRL, flags);
}
