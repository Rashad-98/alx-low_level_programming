#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to list's head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
