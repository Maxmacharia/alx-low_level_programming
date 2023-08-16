#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function to print multiple numbers
 *
 * @n: scrutinize input function
 *
 */

void print_times_table(int n)
{
	int number, product, multiple;

	if (n <= 15 && n >= 0)
	{
		number = 0;
		while (number <= n)
		{
			_putchar(48);
			multiple = 1;
			while (multiple <= n)
			{
				_putchar(',');
				_putchar(' ');
				product = number * multiple;
				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar(((product / 10) % 10) + 48);
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + 48);
				}
				_putchar((product % 10) + 48);
				multiple++;
			}
			_putchar('\n');
			number++;
		}
	}
}
