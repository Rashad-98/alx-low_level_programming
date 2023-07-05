#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node from list at given index
 * @head: pointer to head of the list
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;


	if (!head || !*head)
	{
		return (-1);
	}
	else if (index == 0)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	else
	{
		listint_t *current = *head;
		listint_t *indexNode = NULL;

		for (i = 0; i < index - 1; i++)
		{
			current = current->next;
			if (!current)
				return (-1);
		}
		indexNode = current->next;
		current->next = current->next->next;
		free(indexNode);
	}

	return (1);
}
