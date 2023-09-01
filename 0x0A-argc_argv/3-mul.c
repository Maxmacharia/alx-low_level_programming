#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @a: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *a)
{
	int b, c, d, length, e, num;

	b = 0;
	c = 0;
	d = 0;
	length = 0;
	e = 0;
	num = 0;

	while (a[length] != '\0')
		length++;

	while (b < length && e == 0)
	{
		if (a[b] == '-')
			++c;

		if (a[b] >= '0' && a[b] <= '9')
		{
			num = a[b] - '0';
			if (c % 2)
				num = -num;
			d = d * 10 + num;
			e = 1;
			if (a[b + 1] < '0' || a[b + 1] > '9')
				break;
			e = 0;
		}
		b++;
	}

	if (e == 0)
		return (0);

	return (d);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

