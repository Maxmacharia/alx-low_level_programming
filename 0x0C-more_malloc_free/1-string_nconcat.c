#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, lenA = 0, lenB = 0;

	while (s1 && s1[lenA])
		lenA++;
	while (s2 && s2[lenB])
		lenB++;

	if (n < lenB)
		a = malloc(sizeof(char) * (lenA + n + 1));
	else
		a = malloc(sizeof(char) * (lenA + lenB + 1));

	if (!a)
		return (NULL);

	for (; i < lenA; i++)
	{
		a[i] = s1[i];
	}

	while (n < lenB && i < (lenA + n))
		a[i++] = s2[j++];

	while (n >= lenB && i < (lenA + lenB))
		a[i++] = s2[j++];

	a[i] = '\0';

	return (a);
}


