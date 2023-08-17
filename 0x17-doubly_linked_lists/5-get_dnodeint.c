#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to head
 * @index: index of node
 *
 * Return: address of node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p = head;

	for (i = 0; p && i < index; i++)
		p = p->next;

	return (p);
}
