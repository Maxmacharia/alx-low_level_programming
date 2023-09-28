#include "main.h"

/**
 * clear_bit - function that clears value of bit at a given index
 * @n: number to be searched
 * @index: value at index
 * Return 1 if it worked -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
