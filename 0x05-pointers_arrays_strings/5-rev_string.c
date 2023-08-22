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
	int a, b;
	char temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < a / 2)
	{
		temp = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = temp;
		b++;
	}
}
