#include "lists.h"

/**
 * *delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of linked list
 * @index: index of a list
 * Return: 1 if it succeeded else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *u, *v;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);
	t = *head;
	u = (*head)->next;
	if (index == 0)
	{
		free(t);
		*head = u;
		return (1);
	}
	while (count < index - 1)
	{
		t = t->next;
		if (!t)
			return (-1);
		count++;
	}
	v = t->next;
	u = v->next;
	t->next = u;
	free(v);
	return (1);
}
