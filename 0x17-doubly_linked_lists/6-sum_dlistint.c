#include "lists.h"

/**
 * sum_dlistint - sums all data in doubly linked list of integers
 * @head: pointer to list's head
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
