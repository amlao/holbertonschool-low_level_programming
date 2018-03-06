#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	if (!head)
		return;
	tmp = *head;
	while (tmp)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	*head = NULL;
}
