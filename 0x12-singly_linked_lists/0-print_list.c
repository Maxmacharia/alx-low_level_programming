#include "lists.h"

/**
 * print_list - print all the elements in the list
 * @h: points to the next value
 * Return: the size_t
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (empty) \n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}

