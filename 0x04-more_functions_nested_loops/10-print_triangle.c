#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: scrutinize input function
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int q;
		int w;

		q = 1;
		while (q <= size)
		{
			w = 1;
			while (w < size)
			{
				_putchar(' ');
				w++;
			}
			w = 1;
			while (w <= q)
			{
				_putchar('#');
				w++;
			}
			_putchar('\n');
			q++;
		}
	}
}
