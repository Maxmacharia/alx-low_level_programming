#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for digit 0 to 9
 *
 * @c: scrutinize input function
 *
 * Return: 1 if true other 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
