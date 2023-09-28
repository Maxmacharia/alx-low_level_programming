#include "main.h"

/**
 * print_binary - function that prints the binary represantation of  number
 * @n: argument to be used
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int decimal;
	int i, num = 0;

	i = 63;
	while (i >= 0)
	{
		decimal = n >> i;

		if (decimal & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
		i--;
	}
	if (!num)
		_putchar('0');
}

