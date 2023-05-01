#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node in a singly linked list at a
 * given index
 * @head: pointer to pointer to list's head
 * @idx: index
 * @n: value of new node
 *
 * Return: address of new node, of NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		if ((i + 1) == idx)
		{
			listint_t *new, *tmp2;

			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;

			tmp2 = tmp->next;
			tmp->next = new;
			new->next = tmp2;

			return (new);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
