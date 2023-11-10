#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (!h)
		return (0);

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
