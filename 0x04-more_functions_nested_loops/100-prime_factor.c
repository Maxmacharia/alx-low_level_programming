#include <stdio.h>
#include <math.h>

/**
 * prime_factor - function to print prime factors
 *
 * @num: scrutinize input function
 *
 */

void prime_factor(long int num)
{
	int p;
	int l;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	for (p = 3; p <= sqrt(num); p = p + 2)
	{
		while (num % p == 0)
		{
			num = num / p;
			l = p;
		}
	}
	if (num > 2)
	{
		l = num;
	}
	printf("%d\n", l);
}

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	prime_factor(612852475143);
	return (0);
}
