#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
