#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes te first node in the linked list
 * @head: pointer to the first node
 * Return: data stored in the head node's data
 */

int pop_listint(listint_t **head)
{
	struct listint_s *temp = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	data = (*head)->n;
	free(temp);
	temp = NULL;

	return (data);
}
