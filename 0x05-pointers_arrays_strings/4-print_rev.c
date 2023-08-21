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
	int rep = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	rep = i - 1;
	while (rep >= 0)
	{
		rep--;
		_putchar(s[rep]);
	}
	_putchar('\n');
}
