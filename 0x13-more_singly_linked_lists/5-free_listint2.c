#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function that frees head and sets head to null
 * @head: points to the first node in the linked list
 * Return: noting
 */

void free_listint2(listint_t **head)
{
	struct listint_s *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		if (*head == NULL)
		{
			return;
		}
	}
}
