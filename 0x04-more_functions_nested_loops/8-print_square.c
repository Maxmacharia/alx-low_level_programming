#include "main.h"

/**
 * print_square - function that prints a square shape
 *
 * @size: scrutinize input function
 *
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a;
		int b;

		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
