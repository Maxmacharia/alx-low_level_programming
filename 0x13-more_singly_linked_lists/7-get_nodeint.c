#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node in a linked list
 * @head: pointer tho the first node of the linked list
 * @index: the number of the element
 * Return: The nth number of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}
	return (tmp ? tmp : NULL);
}
