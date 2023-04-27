#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}

	free_list(head->next);

	free(head->str);
	free(head);
}
