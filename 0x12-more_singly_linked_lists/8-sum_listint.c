#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head of a list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum += head->n;
		head = head->next;
	}
	else
	{
		return (0);
	}
	return(sum);
}
