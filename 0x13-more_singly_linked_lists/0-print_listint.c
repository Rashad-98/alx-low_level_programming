#include "lists.h"

/**
 * print_listint - print contents of singly linked list
 * @h: pointer to list's head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (!(h == NULL))
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}

	return (0);
}
