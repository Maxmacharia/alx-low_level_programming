#include "lists.h"

/**
 * add_node_end - new node added at the end by tis function
 * @head: double pointer to the list_t list
 * @str: string to be embedded in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brandnew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	brandnew = malloc(sizeof(list_t));
	if (!brandnew)
		return (NULL);

	brandnew->str = strdup(str);
	brandnew->len = len;
	brandnew->next = NULL;

	if (*head == NULL)
	{
		*head = brandnew;
		return (brandnew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = brandnew;

	return (brandnew);
}

