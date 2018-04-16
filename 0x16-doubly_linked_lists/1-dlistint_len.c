#include "lists.h"

/**
 * size_t dlistint_len: returns the number of elements in a linked list
 * @h: head of a list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t counter = 0;

  for (; h; counter++)
    h = h->next;
  return (counter);
}
