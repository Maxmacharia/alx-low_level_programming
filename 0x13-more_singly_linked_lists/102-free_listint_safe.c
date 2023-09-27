#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that free a list
 * @h: pointer to the first node of the linked list
 * Return: size of the free\'ed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	struct listint_s *tmp;

	if (!head)
		return (98);

	while (*h)
	{
		tmp = (*h)->next;
		free(tmp);
		*h = tmp;
		count++;
	}
	return (count);
}
