#include "main.h"
#include <stdio.h>

/**
 * times_table - functon to print nine times table
 *
 */

void times_table(void)
{
	int number, multiple, product;

	number = 0;
	while (number <= 9)
	{
		_putchar(48);
		multiple = 1;
		while (multiple <= 9)
		{
			_putchar(',');
			_putchar(' ');
			product = number * multiple;
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + 48);
			}
			_putchar((product % 10) + 48);
			multiple++;
		}
		number++;
		_putchar('\n');
	}
}
