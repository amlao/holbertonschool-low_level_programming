#include "lists.h"

/**
 * int sum_dlistint: returns the sume of all the data of a linked list
 * @head: head of the list
 * Return: the sume of n else 0
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;

  for (; head; head = head->next)
    sum += head->n;
  return (sum);
}
