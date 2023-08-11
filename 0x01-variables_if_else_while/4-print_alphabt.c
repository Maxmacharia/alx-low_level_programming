#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		if (k != 'q' && k != 'e')
			putchar(k);
	putchar('\n');
	return (0);
}
