#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index: returns the node of a linked list
 * @head: head of the list
 * @index: index to get the node
 * Return: the nth node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  unsigned int counter = 0;

  if (!head)
    return (NULL);
  for (; counter < index && head->next; counter++)
    head = head->next;
  return (head);
}
