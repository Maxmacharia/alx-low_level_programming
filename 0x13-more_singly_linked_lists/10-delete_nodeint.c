#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes node at a given position
 * @head: pointer to the first node
 * @index: position at which the node is to be deleted
 * Return: Success (1) failure (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	struct listint_s *temp, *tmpdel;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else
		return (1);
	temp = *head;
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	tmpdel = temp->next;
	temp->next = tmpdel->next;
	free(tmpdel);
}

