#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 */
void check_elf(unsigned char *e_ident)
{
	int a;

	for (a = 0; a < 4; a++)
	{
		if (e_ident[a] != 127 &&
		    e_ident[a] != 'E' &&
		    e_ident[a] != 'L' &&
		    e_ident[a] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
