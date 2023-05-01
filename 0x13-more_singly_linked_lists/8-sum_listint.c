#include "lists.h"

/**
 * sum_listint - sums all data in singly linked list
 * @head: pointer to list's head
 *
 * Return: sum or 0 for empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
