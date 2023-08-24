#include "main.h"

/**
 * leet - function that encodes
 *
 * @c: character to be encoded
 *
 * Return: charater
 *
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int a;

	while (*c)
	{
		a = 0;
		while (a < sizeof(key) / sizeof(char))
		{
			if (*c == key[a] || *c == key[a] + 32)
			{
				*c = 48 + value[a];
			}
			a++;
		}
		c++;
	}
	return (cp);
}
