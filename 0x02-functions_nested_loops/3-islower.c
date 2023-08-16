#include <stdio.h>

/**
 * _islower - function to check for lowercase
 *
 * @c: scrutinize input function
 *
 * Return: 1 if true otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

