#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers upto 98
 *
 * @n: scrutinize input function
 *
 */

void print_to_98(int n)
{
	int k;

	if (n > 98)
	{
		k = n;
		while (k > 98)
		{
			printf("%d, ", k);
			k--;
		}
	}
	else
	{
		k = n;
		while (k < 98)
		{
			printf("%d, ", k);
			k++;
		}
	}
	printf("98\n");
}

