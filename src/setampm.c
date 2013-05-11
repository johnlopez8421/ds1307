#include <ds1307.h>
#include <twi.h>
#include <util.h>

void ds1307_setampm(uint8_t ampm)
{
	uint8_t hrval;
	
	hrval = ds1307_regrd(DS1307_REGHR);
	hrval &= ~DS1307_PM;
	ampm  &= DS1307_PM;
	hrval |= ampm;
	
	ds1307_regwr(DS1307_REGHR, hrval);
}
