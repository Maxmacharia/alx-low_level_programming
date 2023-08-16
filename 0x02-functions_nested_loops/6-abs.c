#include "main.h"

/**
 * _abs - function to compute an absolute value
 *
 * @a: scrutinize input function
 *
 * Return: Always 0 (Success)
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
	}
	return (a);
}
