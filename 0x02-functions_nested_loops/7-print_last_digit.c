#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function to print last digit
 *
 * @m: scrutinize input function
 *
 * Return: Always m (sucess)
 *
 */

int print_last_digit(int m)
{
	int last_digit;

	if (m < 0)
	{
		last_digit = (-1) * (m % 10);
	}
	else
	{
		last_digit = m % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
