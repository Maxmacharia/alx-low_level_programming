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
	int r, m, l;

	for (r = 0; m = (n - 1); r < m; r++ m--)
	{
		l = a[r];
		a[r] = a[m];
		a[m] = l;
	}
}
