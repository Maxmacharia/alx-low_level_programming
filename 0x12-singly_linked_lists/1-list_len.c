#include "lists.h"

/**
 * list_len - print number of element
 * @h: points to list_t
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
