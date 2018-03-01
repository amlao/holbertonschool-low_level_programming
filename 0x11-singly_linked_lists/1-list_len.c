#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: teh number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	for (; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
