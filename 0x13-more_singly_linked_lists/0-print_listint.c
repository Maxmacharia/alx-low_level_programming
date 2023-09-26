#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function to print data in nodes and return number of nodes.
 * @h: head that points to the fast node
 * Return: num ber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
