#include "main.h"

/**
 * numlength - function to print length
 *
 * @number: scrutinize input function
 *
 * Return: Always length
 *
 */

int numlength(int number)
{
	int length = 0;

	if (!number)
		return (0);
	while (number)
	{
		number = number / 10;
		length = length + 1;
	}
	return (length);
}
