#include <stdio.h>

/**
 * print_alphabet - function that prints in lowercase
 *
 * Return: Success 1
 *
 */

void print_alphabet(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
}
