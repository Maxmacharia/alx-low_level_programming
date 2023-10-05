#include "main.h"

/**
 * append_text_to_file - function to append text to a file
 * @filename: pointer to te file to create
 * @text_content: pointer to the text
 * Return: 1 if success -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
