#include "main.h"

/**
 * puts_half - function to print half the numbers in a loop
 *
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c = c / 2;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
