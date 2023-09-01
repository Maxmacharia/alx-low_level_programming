#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two strings
 *
 * @dest: one of the strings to be concatenated
 *
 * @src: the other string to be concatenated
 *
 * Return: Always dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b])
	{
		dest[a++] = src[b];
		b++;
	}
	return (dest);
}
