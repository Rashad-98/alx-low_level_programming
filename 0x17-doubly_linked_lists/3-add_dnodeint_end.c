#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a d_list
 * @head: pointer to pointer to head
 * @n: value of new node
 *
 * Return: address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *bp, *fp, *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	bp = *head;
	fp = (*head)->next;
	while (fp)
	{
		bp = bp->next;
		fp = fp->next;
	}
	bp->next = node;
	node->prev = bp;

	return (node);
}
