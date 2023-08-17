#include "lists.h"

/**
 * dlistint_len - gets number of elements in linked list
 * @h: pointer to head
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
