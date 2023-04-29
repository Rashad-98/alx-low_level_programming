#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of singly linked list
 * @head: pointer to pointer to head of list
 * @n: value of new node
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
