#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at given index
 * @head: pointer to list's head
 * @index: index of node to be found
 *
 * Return: found node or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		if (i == index)
			return (head);
		head = head->next;
	}

	return (0);
}
