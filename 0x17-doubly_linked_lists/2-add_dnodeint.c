#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to pointer to head
 * @n: value of new node
 *
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
