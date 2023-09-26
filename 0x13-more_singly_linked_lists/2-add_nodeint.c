#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function to add a new node at the beginning
 * @head: points to the first node
 * @n: data to be stored in the node
 * Return: address of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *ptr = malloc(sizeof(struct listint_s));

	ptr->n = n;
	ptr->next = NULL;

	if (!ptr)
	{
		return (NULL);
	}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
