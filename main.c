#include "main.h"
#define F_CPU 8000000L
int main ()
{
	/* Initializations */
	LED_init(LED_RED);
	LED_init(LED_YLW);
	LED_init(LED_GRN);
	MTR_init(MTR1);

	while(1)
	{
		LED_on(LED_GRN);
		MTR_ON_CW(MTR1);
		_delay_ms(5000);
		MTR_OFF(MTR1);
		_delay_ms(5000);

		LED_off(LED_GRN);
		LED_on(LED_YLW);
		_delay_ms(5000);

		LED_off(LED_YLW);
		LED_on(LED_RED);
		MTR_ON_CCW(MTR1);
		_delay_ms(5000);
		MTR_OFF(MTR1);
		_delay_ms(5000);

		LED_off(LED_RED);
		LED_on(LED_YLW);
		_delay_ms(5000);
		LED_off(LED_YLW);


	}

	return 0;
}
