#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: character
 *
 * Return: Always character
 *
 */

char *_strdup(char *str)
{
	int a;
	int size;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	b = malloc(size * sizeof(*str) + 1);
	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
			b[a] = str[a];
	}
	return (b);
}
