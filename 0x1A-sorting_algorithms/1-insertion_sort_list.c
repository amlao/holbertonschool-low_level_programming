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
	while (traverse)
	{
		while traverse->n < traverse->prev->n)
		{
			if (traverse->next != NULL)
			{
				traverse = traverse->prev;
				holder->prev = traverse->prev;
				holder->next = traverse;
				print_list(*list);
				holder = traverse->prev;
			}
		}
		traverse = traverse->next;
	}
}
