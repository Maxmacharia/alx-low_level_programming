#include "main.h"

/**
 * paststar - function to check past star
 *
 * @s2: character
 *
 * Return: Always character
 *
 */

char *paststar(char *s2)
{
	if (*s2 == '*')
		return (paststar(s2 + 1));
	else
		return (s2);
}

/**
 * incept - function to incept the number
 *
 * @s1: first character
 *
 * @s2: second chharacter
 *
 * Return: Always integer
 *
 */

int incept(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 ==  0)
		return (0);
	if (*s1 == *s2)
	{
		ret = ret + wildcmp(s1 + 1, s2 + 1);
	}
	ret = ret + incept(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - function to compare two strings
 *
 * @s1: first character
 *
 * @s2: second character
 *
 * Return: Always integer
 *
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*paststar(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
		{
			return (1);
		}
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = paststar(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
		{
			ret = ret + wildcmp(s1 + 1, s2 + 1);
		}
		ret = ret + incept(s1, s2);
		return (!!ret);
	}
	return (0);
}
