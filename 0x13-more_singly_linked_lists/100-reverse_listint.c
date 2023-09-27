#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses linked lists
 * @head: pointer to the first node of the linked lists
 * Return: A pointer to the firstnode of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	struct listint_s *previous, *upnext;

	while (*head != NULL)
	{
		upnext = (*head)->next;
		(*head)->next = previous;
		previous = *head;
	}
	*head = upnext;
	*head = previous;
	return (*head);
}
