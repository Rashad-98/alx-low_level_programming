#include "lists.h"

/**
 * listint_len - get the number of nodes in
 * singly linked list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (!(h == NULL))
	{
		return (listint_len(h->next) + 1);
	}

	return (0);
}
