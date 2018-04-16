#include "lists.h"

/**
 * dlistint_t *add_dnodeint: adds a new node at the beginning of a list
 * @head: head of a list
 * @n: node to be added
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *newnode;

  if (!head)
    return (NULL);
  newnode = *head;
  newnode = malloc(sizeof(dlistint_t));
  if (!newnode)
    return (NULL);
  newnode->n = n;
  newnode->prev = NULL;
  newnode->next = *head;
  *head = newnode;
  return (newnode);
}
