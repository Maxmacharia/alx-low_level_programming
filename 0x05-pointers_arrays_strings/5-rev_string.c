#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to print reverse of a string
 *
 * @s: character to be reversed
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int rep = 0;

	while (s[i])
	{
		i++;
	}
	rep = --i;
	while (rep >= 0)
	{
		rep--;
		putchar(s[rep]);
	}
	putchar('\n');
}
