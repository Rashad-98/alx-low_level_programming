#include "lists.h"

/**
 * list_len - returns length of singly linked list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (list_len(h->next) + 1);
}
