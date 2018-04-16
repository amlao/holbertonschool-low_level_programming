#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end: adds a new node at the end of a list
 * @head: head of a list
 * @n: node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *newnode, *holder;

  if (!head)
    return (NULL);
  newnode = malloc(sizeof(dlistint_t));
  if (!newnode)
    return (NULL);
  newnode->n = n;
  newnode->next = NULL;
  if (!*head)
    {
      newnode->prev = NULL;
      *head = newnode;
      return (*head);
    }
  holder = *head;
  while (holder->next)
    holder = holder->next;
  holder->next = newnode;
  holder->prev = *head;
  return (holder);
}
