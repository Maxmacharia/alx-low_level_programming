#include <stdio.h>
#include "main.h"

/**
 * _puts - function that write character to stdout
 *
 * @str: the character to print
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
