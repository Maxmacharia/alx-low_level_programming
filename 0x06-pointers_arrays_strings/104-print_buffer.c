#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @b: character
 *
 * @size: integer size
 *
 */

void print_buffer(char *b, int size)
{
	int a, w, x;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		w = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		x = 0;
		while (x < 10)
		{
			if (x < w)
				printf("%02x", *(b + a + x));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
			x++;
		}
		x = 0;
		while (x < w)
		{
			int c = *(b + a + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
			x++;
		}
		printf("\n");
		a = a + 10;
	}
}

