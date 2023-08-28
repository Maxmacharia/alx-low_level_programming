#include <stdio.h>

/**
 * print_diagsums - function that prints the sum
 *
 * @a: array
 *
 * @size: size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int sumb;
	int sumc;
	int d;

	sumb = 0;
	sumc = 0;
	d = 0;
	while (d < size)
	{
		sumb = sumb + a[d * size + d];
		d++;
	}
	d = size - 1;
	while (d >= 0)
	{
		sumc = sumc + a[d * size + (size - d - 1)];
		d--;
	}
	printf("%d, %d\n", sumb, sumc);
}
