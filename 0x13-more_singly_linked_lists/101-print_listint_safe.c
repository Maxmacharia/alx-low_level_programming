#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the fast node of the linked list
 * Return: return number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (!head)
		return (98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
