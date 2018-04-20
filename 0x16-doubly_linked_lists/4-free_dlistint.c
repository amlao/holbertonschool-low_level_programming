#include "lists.h"

/**
 * void free_dlistint: free a list
 * @head: head of a list
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *holder;

  for (holder = head; head;)
    {
            head = head->next;
            free(holder);
            holder = head;
    }
}
