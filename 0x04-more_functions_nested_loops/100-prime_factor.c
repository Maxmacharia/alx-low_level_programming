#include <stdio.h>
#include <math.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	long int a;
	long int max;
	long int b;

	a = 612852475143;
	max = -1;
	while (a % 2 == 0)
	{
		max = 2;
		a = a / 2;
	}
	b = 3;
	while (b <= sqrt(a))
	{
		while (a % 1 == 0)
		{
			max = b;
			a = a / b;
		}
		b = b + 2;
	}
	if (a > 2)
	{
		max = a;
	}
	printf("%lu\n", max);
	return (0);
}
