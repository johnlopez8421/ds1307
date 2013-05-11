#include <stdio.h>
#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_diowr(uint8_t val)
{
	ds1307_regwr(DS1307_REGCTRL, val);
}