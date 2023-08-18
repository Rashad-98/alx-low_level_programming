#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of dlistint_t
 * @head: pointer to pointer to head
 * @index: index of node
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p;

	if (!head || !*head)
		return (-1);

	p = *head;
	for (i = 0; p && i < index; i++)
		p = p->next;

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
	}
	else if (!p->next)
	{
		p->prev->next = NULL;
		free(p);
	}
	else if (p && i == index)
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;
		free(p);
	}


	return (1);
}
