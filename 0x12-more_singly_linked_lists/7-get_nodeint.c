#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 * Return: the nth node else NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (; count < index; count++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
