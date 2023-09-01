#include "main.h"

/**
 * _strchr - function to locate characters
 *
 * @s: the string
 *
 * @c: the character
 *
 * Return: character
 *
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] >= '\0')
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		a++;
	}
	return (0);
}
