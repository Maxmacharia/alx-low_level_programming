#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int a, sum = 0;

	va_start(p, n);

	a = 0;
	while (a < n)
	{
		sum = sum + va_arg(p, int);
		a++;
	}

	va_end(p);

	return (sum);
}
