#include "lists.h"

/**
 * free_list - free a list
 * @head: link list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(tmp);
		free(head->str);
		free(head);
	}
}
