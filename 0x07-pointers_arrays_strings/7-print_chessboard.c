#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: array
 *
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	c = 0;
	while (c < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[c][b]);
			b++;
		}
		_putchar('\n');
		c++;
	}
}
