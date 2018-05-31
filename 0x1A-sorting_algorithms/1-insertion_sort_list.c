#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *traverse;

	if (!list || !(*list))
		return;

	traverse = *list;
	traverse = traverse->next;
	while (traverse)
	{
		while (traverse->prev && traverse->prev->n > traverse->n)
		{
			traverse->prev->next = traverse->next;
			if (traverse->next)
				traverse->next->prev = traverse->prev;
			traverse->next = traverse->prev;
			traverse->prev = traverse->prev->prev;
			traverse->next->prev = traverse;
			if (traverse->prev)
				traverse->prev->next = traverse;
			else
			        traverse = *list;
			print_list(*list);
		}
		traverse = traverse->next;
	}
}
