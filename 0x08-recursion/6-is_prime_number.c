#include "main.h"

/**
 * is_prime_number - function that return 1 if its a prime number
 *
 * check - function to check for prime number
 *
 * @g: value
 *
 * @n: integer
 *
 * Return: Always true
 *
 */

int check(int n, int g);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - function to check prime numbers
 *
 * @n: integer
 *
 * @g: value
 *
 * Return: Always true
 *
 */

int check(int n, int g)
{
	if (g >= n && n > 1)
	{
		return (1);
	}
	else if (n % g == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, g + 1));
	}
}
