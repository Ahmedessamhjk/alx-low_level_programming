#include "main.h"

/**
 * jack_bauer - prints every minite of the day
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchsar((hr / 10) + 48);
			_putchsar((hr % 10) + 48);
			_putchsar(':');
			_putchsar((min / 10) + 48);
			_putchsar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
