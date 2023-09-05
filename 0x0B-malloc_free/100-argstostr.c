#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to determie the length
 * @s: string
 * Return: Always integer
 */

int _strlen(char *s)
{
	int size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * argstostr - function that concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: character
 */

char *argstostr(int ac, char **av)
{
	int a, nc, b, cmpt;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < ac)
	{
		nc = nc + _strlen(av[a]);
		nc++;
		a++;
	}
	c = malloc(sizeof(char) * nc + 1);
	if (c == 0)
	{
		return (NULL);
	}
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			c[cmpt] = av[a][b];
			b++;
			cmpt++;
		}
		c[cmpt] = '\n';
		cmpt++;
		a++;
	}
	c[cmpt] = '\0';
	return (c);
}
