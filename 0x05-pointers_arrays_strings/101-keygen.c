#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate random passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int total;
	char a;

	srand(time(NULL));
	while (total <= 2645)
	{
		a = rand() % 128;
		total += a;
		putchar(a);
	}
	putchar(2772 - total);
	return (0);
}
