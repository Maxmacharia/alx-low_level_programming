#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 */
void print_magic(unsigned char *e_ident)
{
	int a;

	printf(" Magic: ");

	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x", e_ident[a]);

		if (a == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
