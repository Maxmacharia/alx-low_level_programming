#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int value, a, total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);
	total = 0;

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && value >= 0; a++)
	{
		while (value >= coins[a])
		{
			total++;
			value -= coins[a];
		}
	}

	printf("%d\n", total);
	return (0);
}

