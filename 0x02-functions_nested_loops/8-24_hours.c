#include "main.h"

/**
 * jack_bauer - function to loop through hours and minutes
 *
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	while (hours <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
