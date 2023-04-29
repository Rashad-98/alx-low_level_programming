#include "lists.h"

/**
 * add_nodeint - adds node to beginning of list
 * @head: pointer to pointer to head of list
 * @n: node's value
 *
 * Return: pointer to new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!(head == NULL))
	{
		listint_t *new = malloc(sizeof(listint_t));
		
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;

		*head = new;

		return (new);
	}

	return (0);
}
