#include "lists.h"

/**
 * free_list - free a list
 * @head: link list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		free(head->next);
	}
}
