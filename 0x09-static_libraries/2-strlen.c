#include <string.h>
#include <stdio.h>

/**
 * _strlen - function the returns the length of string
 *
 * @s: scrutinize input function
 *
 * Return: length (Success)
 *
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
