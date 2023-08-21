#include <stdio.h>

/**
 * print_array - array to print elements of an array
 *
 * @a: pointer
 *
 * @n: variable
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
