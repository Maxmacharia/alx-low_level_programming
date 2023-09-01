#include "main.h"

/**
 * _strstr - function to locate characters
 *
 * @haystack: the string
 *
 * @needle: the character
 *
 * Return: character
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	while (haystack[a] >= '\0')
	{
		if (haystack[a] == needle)
		{
			return (&haystack[a]);
		}
	a++;
	}
	return ('\0');
}
