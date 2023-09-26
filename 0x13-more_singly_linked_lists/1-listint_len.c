#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that prints the number of nodes
 * @h: points to the first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
