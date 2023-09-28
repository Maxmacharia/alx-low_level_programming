#include "main.h"

/**
 * get_bit - function to return the bit value at a given position
 * @n: number to be looked for
 * @index: value of the bit
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
