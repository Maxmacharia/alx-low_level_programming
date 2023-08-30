#include "main.h"

/**
 * final_index - function to print final index
 *
 * @s: integer
 *
 * Return: Always true
 *
 */

int final_index(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a = a + final_index(s + 1) + 1;
	}
	return (a);
}

/**
 * is_palindrome - function to check palindrome
 *
 * @s: integer
 *
 * Return: Always true
 *
 */

int is_palindrome(char *s)
{
	int stop = final_index(s);

	return (check(s, 0, stop - 1, stop % 2));
}

/**
 * check - function to chcek palindrome
 *
 * @s: integer
 *
 * @begin: start
 *
 * @stop: end
 *
 * @center: middle
 *
 * Return: Always true
 */

int check(char *s, int begin, int stop, int center)
{
	if ((begin == stop && center != 0) || (begin == stop + 1 && center == 0))
	{
		return (1);
	}
	else if (s[begin] != s[stop])
	{
		return (0);
	}
	else
	{
		return (check(s, begin + 1, stop - 1, center));
	}
}

