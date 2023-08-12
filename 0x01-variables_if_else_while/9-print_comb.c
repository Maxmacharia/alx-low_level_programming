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

	k = 0;
	while (k <= 9)
	{
		putchar(k + 48);
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
