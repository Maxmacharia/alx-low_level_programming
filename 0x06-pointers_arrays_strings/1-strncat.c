#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: one of the string
 *
 * @src: the other string
 *
 * @n: number of bytes
 *
 * Return: Always dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
