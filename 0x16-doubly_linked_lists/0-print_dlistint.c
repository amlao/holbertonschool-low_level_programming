#include "lists.h"

/**
 * size_t print_dlistint: prints all the elements of a dlistint_t list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t counter = 0;

  for (; h;)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
  return (counter);
}
