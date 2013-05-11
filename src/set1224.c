#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_set1224(uint8_t flag1224)
{
	uint8_t hrval;
	
	hrval = ds1307_regrd(DS1307_REGHR);
	hrval &= ~DS1307_12HR;
	flag1224 &= DS1307_12HR;
	hrval |= flag1224;
	
	ds1307_regwr(DS1307_REGHR, hrval);
}