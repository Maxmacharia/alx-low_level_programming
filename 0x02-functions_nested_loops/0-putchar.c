#include "main.h"

/**
 * main - main function
 *
 * Decsription: program to print _putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char str[] = "_putchar";
	int nj;

	nj = 0;
	while (nj < 8)
	{
		_putchar(str[nj]);
		nj++;
	}
	_putchar('\n');
	return (0);
}
