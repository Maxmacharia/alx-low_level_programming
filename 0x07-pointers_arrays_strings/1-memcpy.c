#include "main.h"

/**
 * _memcpy - function that copies content
 *
 * @dest: first content
 *
 * @src: second content
 *
 * @n: number
 *
 * Return: string
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	while (a < b)
	{
		dest[a] = src[a];
		a++;
		n--;
	}
	return (dest);
}
