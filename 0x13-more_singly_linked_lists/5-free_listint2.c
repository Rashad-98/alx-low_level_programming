#include "lists.h"

/**
 * free_listint2 - frees a singly linked list of integers and sets
 * a pointer to a pointer to its head to NULL.
 * @head: pointer to pointer to list's head
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *tmp = *head;

	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			i = 0;
		}
	}

	head = NULL;
}
