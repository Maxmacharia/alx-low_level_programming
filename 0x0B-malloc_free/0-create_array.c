#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of integer
 * @c: size of character
 *
 * Return: Always character
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
