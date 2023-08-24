#include "main.h"

/**
 * rot13 - function that encodes to rot13
 *
 * @c: string to be encoded
 *
 * Return: Always a string
 *
 */

char *rot13(char *c)
{
	int a;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *pls = c;

	while (*c)
	{
		a = 0;
		while (a <= 52)
		{
			if (*c == rot13[a])
			{
				*c = ROT13[a];
				break;
			}
			a++;
		}
		c++;
	}
	return (pls);
}
