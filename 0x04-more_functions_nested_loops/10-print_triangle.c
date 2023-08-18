#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: scrutinize input function
 *
 */

void print_triangle(int size)
{
	int h;
	int b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		h = 1;
		while (h <= size)
		{
			b = 1;
			while (b <= size)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
				{
					_putchar('#');
				}
				b++;
			}
			h++;
			_putchar('\n');
		}
	}
}
