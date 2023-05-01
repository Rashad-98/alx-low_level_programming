#include "lists.h"

/**
 * pop_listint - deletes head of singly linked list
 * @head: pointer to pointer to head
 *
 * Return: value of n
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	value = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (value);
}
