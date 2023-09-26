#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that adds the data stored in nodes of linked list
 * @head: pointer to the first node
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
