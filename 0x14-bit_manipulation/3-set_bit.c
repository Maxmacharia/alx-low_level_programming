#include "main.h"

/**
 * set_bit - function that set the value of a bit at a given point
 * @n: number to be searched
 * @index: value of bit
 * Return: value of bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
