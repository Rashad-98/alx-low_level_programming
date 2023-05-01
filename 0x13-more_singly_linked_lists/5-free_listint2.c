#include "lists.h"

/**
 * free_listint2 - frees a singly linked list of integers and sets
 * a pointer to a pointer to its head to NULL.
 * @head: pointer to pointer to list's head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
