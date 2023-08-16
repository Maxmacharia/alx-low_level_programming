#include <stdio.h>

/**
 * numlength - function to print length
 *
 * @number: scrutinize input function
 *
 * Return: Always length
 *
 */

int numlength(int number)
{
	int length = 0;

	if (!number)
		return (0);
	while (number)
	{
		number = number / 10;
		length = length + 1;
	}
	return (length);
}

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int count, first;
	unsigned long t1 = 1, t2 = 2, sum, mx = 100000000, t10 = 0, t20 = 0, sumo = 0;

	count = 1;
	while (count <= 98)
	{
		if (t10 > 0)
			printf("%lu", t10);
		first = numlength(mx) - 1 - numlength(t1);
		while (t10 > 0 && first > 0)
		{
			printf("%d", 0);
			first--;
		}
		printf("%lu", t1);
		sum = (t1 + t2) % mx;
		sumo = t10 + t20 + (t1 + t2) / mx;
		t1 = t2;
		t10 = t20;
		t2 = sum;
		t20 = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
		count++;
	}
	return (0);
}
