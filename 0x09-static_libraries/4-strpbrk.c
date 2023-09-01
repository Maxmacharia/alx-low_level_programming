#include "main.h"

/**
 * _strpbrk - function that searches a string
 *
 * @s: string
 *
 * @accept: string to be searched
 *
 * Return: character
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		while (accept[a])
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
