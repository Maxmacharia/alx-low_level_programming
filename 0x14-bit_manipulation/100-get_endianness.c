#include "main.h"

/**
 * get_endianness - function check the endainness
 * Return: 0 if big endian 1 if little endain
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
