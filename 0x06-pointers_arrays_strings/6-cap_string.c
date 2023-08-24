#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * islower - function to check for lowercase letters
 *
 * @c: string to be returned
 *
 * Return: string
 *
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isdelimiter - function to determine special characters
 *
 * @c: string
 *
 * Return: always 0 (Success)
 *
 */
int isdelimiter(char c)
{
	int a;
	char delimiter[] = "\t\n,.!?\"(){}";

	a = 0;
	while (a < 12)
	{
		if (c == delimiter[a])
		{
			return (1);
		}
		a++;
	}
	return (0);
}
/**
 * cap_string - function to captialize all words
 *
 * @b: the string to be used
 *
 * Return: Always prt
 *
 */
char *cap_string(char *b)
{
	char *pls = b;
	int discovered = 1;

	while (*b)
	{
		if (isdelimiter(*b))
			discovered = 1;
		else if (islower(*b) && discovered)
		{
			*b = *b - 32;
			discovered = 0;
		}
		else
		{
			discovered = 0;
		}
		b++;
	}
	return (pls);
}
