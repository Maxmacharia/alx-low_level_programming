#include <stdio.h>

/**
 * _isalpha - function to check for uppercase and lowercase
 *
 * @c: scritinize input function
 *
 * Return: 1 if true otherwise false
 *
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
