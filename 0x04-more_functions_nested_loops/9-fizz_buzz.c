#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf(" Fizz");
		else if (a % 5 == 0 && a % 3 != 0)
			printf(" Buzz");
		else if (a % 5 == 0 && a % 3 == 0)
			printf(" FizzBuzz");
		else if (a == 1)
			printf(" %d", a);
		else
		{
			printf(" %d", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
