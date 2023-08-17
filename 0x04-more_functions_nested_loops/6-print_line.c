#include "main.h"

/**
 * print_line - function that prints a line
 *
 * @n: scrutinize input function
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		a = 1;
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
