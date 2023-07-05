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
		*head = (*head)->next;
		return (1);
	}
	else
	{
		listint_t *current = *head;

		for (i = 0; i < index - 1; i++)
		{
			current = current->next;
		}
		current->next = current->next->next;
	}

	return (1);
}
