#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int b;
	int a;

	b = 0;
	while (b < 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a >= 10)
				_putchar('1');
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
