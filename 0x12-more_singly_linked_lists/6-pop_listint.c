#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: the head node's data else 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (!*head)
		return (0);
	if (!head)
		return (0);

	p = *head;
	p->next = (*head)->next;
	*head = (*head)->next;
	i = p->n;
	free(p);
	return (i);
}
