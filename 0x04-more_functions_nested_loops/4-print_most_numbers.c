#include "main.h"

/**
 * print_most_numbers - function to print numbers 0-9
 *
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		if (!(a == 2 || a == 4))
		{
			_putchar(a + 48);
		}
		a++;
	}
	_putchar('\n');
}
