#include "main.h"

/**
 * _strcmp - function to compare string
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: Always value
 *
 */

int _strcmp(char *s1, char *s2)
{
	int same;

	same = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int) *s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (same);
}
