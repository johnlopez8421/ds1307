#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setsec(uint8_t sec)
{
	if (sec>59) sec = 0;
	sec = bin2bcd(sec);
	ds1307_regwr(DS1307_REGSEC, sec);
}
