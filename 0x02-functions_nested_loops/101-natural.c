#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int sum;
	int number;

	number = 0;
	while (number < 1024)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			sum = sum + number;
		number++;
	}
	printf("%d\n", sum);
	return (0);
}
