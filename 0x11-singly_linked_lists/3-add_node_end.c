#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list
 * @head: link list
 * @str: string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *b;
	int count = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	while (n->str[count] != 0)
		count++;
	n->len = count;
	n->next = NULL;
	b = *head;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	else
	{
		while (b->next != NULL)
		{
			b = b->next;
		}
	}
	b->next = n;

	return (n);
}
