#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that adds a node a given point
 * @head: pointer to the first node
 * @idx: index of the list where new node should be added
 * @n: data stored in the node
 * Return: the address of the nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
struct listint_s *ptr;
	struct listint_s *ptr2 = malloc(sizeof(struct listint_s));

	ptr2->n = n;
	ptr2->next = NULL;

	if (!*head)
	{
		return (NULL);
	}
	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr;
	return (*head);
}
