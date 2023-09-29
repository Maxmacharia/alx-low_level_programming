#include "main.h"

/**
 * flip_bits - function that return number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: number of bit changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int swap = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = swap >> i;
		if (num & 1)
			count++;
	}

	return (count);
}
