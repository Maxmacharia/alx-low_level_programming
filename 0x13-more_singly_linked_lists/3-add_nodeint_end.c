#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a node at the end of list
 * @head: points at the first node
 * @n: data to be stored in the element
 * Return: address of the nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *ptr;
	struct listint_s *temp = *head;

	ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	if (!ptr)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
