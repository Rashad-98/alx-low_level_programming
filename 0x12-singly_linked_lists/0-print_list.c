#include "lists.h"

/**
 * print_list - prints nodes of singly linked list
 * @h: pointer to list's head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] (%s)\n", h->len, h->str);
	}

	return (print_list(h->next) + 1);
}
