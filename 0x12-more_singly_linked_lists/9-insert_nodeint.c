#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: index of the node
 * @n: value of the node
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s, *t, *u;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = NULL;
	t = *head;

	if (!t)
	{
		*head = s;
		s->next = NULL;
		return (s);
	}

	if (idx == 0)
	{
		*head = s;
		(*head)->next = t;
		return (s);
	}

	while (i < idx - 1)
	{
		t = t->next;
		if (!t)
			return (NULL);
		i++;
	}
	u = t->next;

	t->next = s;
	s->next = u;
	return (s);
}
