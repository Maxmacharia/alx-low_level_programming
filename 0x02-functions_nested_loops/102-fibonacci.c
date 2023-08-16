#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int hesabu;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	hesabu = 0;
	while (hesabu < 50)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;
		if (hesabu == 49)
			printf("\n");
		else
			printf(", ");
		hesabu++;
	}
	return (0);
}
