#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
