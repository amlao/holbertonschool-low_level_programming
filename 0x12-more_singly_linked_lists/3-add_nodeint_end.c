#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list
 * @head: head of a list
 * @n: value of the new node
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *hold;

	new - malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		*head = new;
		return (head);
	}
	hold = *head;
	while (hold->next)
	{
		hold = hold->next;
	}
	hold->next = new;
	return (*head);
}
