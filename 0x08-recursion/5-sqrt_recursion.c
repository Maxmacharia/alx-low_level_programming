#include "main.h"

/**
 * _sqrt_recursion - function to print natural square root
 *
 * square - function to print square
 *
 * @n: number
 *
 * @value: number
 *
 * Return: always true
 */
int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to print square
 *
 * @n: square
 *
 * @value: number
 *
 * Return: Allways true
 */
int square(int n, int value)
{
	if (value * value == n)
	{
		return (value);
	}
	else if (value * value < n)
	{
		return (square(n, value + 1));
	}
	else
	{
		return (-1);
	}
}
