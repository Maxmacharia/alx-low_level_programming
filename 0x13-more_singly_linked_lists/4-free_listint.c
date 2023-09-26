#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free the head
 * @head: points to the first node
 * return: nothing
 */

void free_listint(listint_t *head)
{
	struct listint_s *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
