#include "main.h"

/**
 * reverse_array - function to reverse an array
 *
 * @a: pointer
 *
 * @n: number of elements in an array
 *
 */

void reverse_array(int *a, int n)
{
	int r, m;

	r = 0;
	while (r < n--)
	{
		m = a[r];
		a[r] = a[n];
		a[n] = m;
		r++;
	}
}
