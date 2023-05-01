#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: pointer to list's head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}

/**
 * free_listint2 - frees a singly linked list of integers and sets
 * a pointer to a pointer to its head to NULL.
 * @head: pointer to pointer to list's head
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	free_listint(*head);

	*head = NULL;
}
