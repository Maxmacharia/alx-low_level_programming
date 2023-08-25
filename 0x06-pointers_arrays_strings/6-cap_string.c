#include "main.h"
#include <stdio.h>

/**
 * cap_string - function to capitalize every word
 *
 * @str: string to be returned
 *
 * Return: Always string
 *
 */

char *cap_string(char *str)
{
	int element = 0;

	while (str[element])
	{
		while (!(str[element] >= 97 && str[element] <= 122))
			element++;

		if (str[element - 1] == ' ' ||
		    str[element - 1] == '\t' ||
		    str[element - 1] == '\n' ||
		    str[element - 1] == ',' ||
		    str[element - 1] == ';' ||
		    str[element - 1] == '.' ||
		    str[element - 1] == '!' ||
		    str[element - 1] == '?' ||
		    str[element - 1] == '"' ||
		    str[element - 1] == '(' ||
		    str[element - 1] == ')' ||
		    str[element - 1] == '{' ||
		    str[element - 1] == '}' ||
		    element == 0)
			str[element] -= 32;

		element++;
	}

	return (str);
}

