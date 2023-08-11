#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char k;
	char j;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
