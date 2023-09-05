#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers
 * @width: the width dimension
 * @height: the height dimension
 * Return: Always (0) Success
 */

int **alloc_grid(int width, int height)
{
	int **tab, a, b;

	tab = malloc(sizeof(**tab) * height);
	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		a = 0;
		while (a < height)
		{
			tab[a] = malloc(sizeof(**tab) * width);
			if (tab[a] == 0)
			{
				while (a--)
				{
					free(tab[a]);
				}
				free(tab);
				return (NULL);
			}
			b = 0;
			while (b < width)
			{
				tab[a][b] = 0;
				b++;
			}
			a++;
		}
	}
	return (tab);
}
