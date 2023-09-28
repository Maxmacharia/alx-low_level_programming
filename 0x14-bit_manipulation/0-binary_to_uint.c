#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts binary to unsigned number
 * @b: pointer to the string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	unsigned int weight = 1;
	int i, length;

	length = strlen(b);

	i = length - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
		{
			binary = binary + weight;
		}
		weight = weight * 2;
		i--;
	}
	return (binary);
}
