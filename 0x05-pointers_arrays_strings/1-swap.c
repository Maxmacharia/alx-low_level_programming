#include "main.h"

/**
 * swap_int - function that swaps 2 values of integers
 *
 * @a: a pointer the integer we want to set to 42
 *
 * @b: a pointer the integer we want to set to 98
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
