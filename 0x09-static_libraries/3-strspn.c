#include "main.h"

/**
 * _strspn - function to print te length prefix substring
 *
 * @s: string
 *
 * @accept: character
 *
 * Return: unsigned int
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;

	while (*s)
	{
		b = 0;
		while (accept[b])
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (a);
			}
			b++;
		}
		s++;
	}
	return (0);
}

