#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *brandnew;
	unsigned int len = 0;

	for (; str[len]; len++)

	brandnew = malloc(sizeof(list_t));
	if (!brandnew)
	{
		return (NULL);
	}

	brandnew->str = strdup(str);
	brandnew->len = len;
	brandnew->next = (*head);
	(*head) = brandnew;

	return (*head);
}
