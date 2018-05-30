#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *traverse, *holder;

	if (!list || !(*list) || (*list)->next == NULL)
		return;

	traverse = *list;
	traverse = traverse->next;
	while (traverse)
	{
		while (traverse->prev && traverse->prev->n > traverse->n)
		{
			holder = traverse;
			if (traverse->next)
				traverse->next->prev = traverse->prev;
			traverse->prev->next = holder->next;

			traverse = traverse->prev;
			holder->prev = traverse->prev;
			holder->next = traverse;
			if (traverse->prev)
				traverse->prev->next = holder;
			else
				holder = *list;

			print_list(*list);
		}
		traverse = traverse->next;
	}
}
