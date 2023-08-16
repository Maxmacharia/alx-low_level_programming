#include <stdio.h>

/**
 * print_alphabet_x10 - function to print letters in 10 lines
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char k;
	int i;

	i = 0;
	while (i < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			putchar(k);
			k++;
		}
		putchar('\n');
		i++;
	}
}
