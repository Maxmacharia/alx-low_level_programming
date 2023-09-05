#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to determine the length of a string
 * @s: string
 * Return: Always integer
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}


/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always character
 */

char *str_concat(char *s1, char *s2)
{
	int sizeA, sizeB, a;
	char *b;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	sizeA = _strlen(s1);
	sizeB = _strlen(s2);
	b = malloc((sizeA + sizeB) * sizeof(char) + 1);
	if (b == 0)
		return (0);
	for (a = 0; a <= sizeA + sizeB; a++)
	{
		if (a < sizeA)
			b[a] = s1[a];
		else
			b[a] = s2[a - sizeA];
	}
	b[a] = '\0';
	return (b);
}
