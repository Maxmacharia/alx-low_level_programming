#include "main.h"

/**
 * print_diagonal - function to draw a diagonal
 *
 * @n: scrutinize input function
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		a = 1;
		while (a <= n)
		{
			b = 1;
			while (b <= n)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
