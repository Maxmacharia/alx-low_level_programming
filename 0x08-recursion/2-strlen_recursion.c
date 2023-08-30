#include "main.h"

/**
 * _strlen_recursion - function to print length
 *
 * @s: string
 *
 * Return: Always length
 *
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length = length + _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
