#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of list
 * @head: pointer to the head pointer
 * @str: string in the node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int count = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free (n);
		return (NULL);
	}

	while (n->str[count] != 0)
		count++;
	n->len = count;
	n->next = *head;

	*head = n;

	return (n);
}
