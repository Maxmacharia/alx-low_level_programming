#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a file a prints it to be std output
 * @filename: file of the name
 * @letters: letters to be printed
 * Return: actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *address;
	ssize_t a;
	ssize_t fd;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	address = malloc(sizeof(char) * letters);
	b = read(fd, address, letters);
	a = write(STDOUT_FILENO, address, b);

	free(address);
	close(fd);
	return (a);
}
