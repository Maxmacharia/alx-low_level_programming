#include "main.h"

/**
 * _memset - function to set memory
 *
 * @s: pointer
 *
 * @b: value used to fill te memory
 *
 * @n: number of bytes
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
