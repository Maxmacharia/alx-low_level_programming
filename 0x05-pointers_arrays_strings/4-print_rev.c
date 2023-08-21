#include "main.h"

/**
 * print_rev - function that print string in reverse
 *
 * @s: character to be reversed
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
