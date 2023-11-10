#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head
 * @idx: index to insert at
 * @n: value of node to insert
 *
 * Return: address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *p, *node;

	if (!h)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0 || (idx == 0 && !*h))
		return (add_dnodeint(h, (const int)n));

	p = *h;
	for (i = 0; p && i < idx; i++)
		p = p->next;
	if (p && i == idx)
	{
		node->prev = p->prev;
		p->prev->next = node;
		node->next = p;
		p->prev = node;
		return (node);
	}
	else if (!p && i == idx)
	{
		return (add_dnodeint_end(h, (const int)n));
	}

	return (NULL);
}
