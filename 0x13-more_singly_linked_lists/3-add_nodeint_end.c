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
	if (head == NULL)
	{
		return (0);
	}

	if (*head == NULL)
	{
		listint_t *new;

		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		(*head) = new;

		return (new);
	}
	else
	{
		if ((*head)->next == NULL)
		{
			listint_t *new = malloc(sizeof(listint_t));

			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = NULL;

			(*head)->next = new;

			return (new);
		}
	}

		add_nodeint_end(&((*head)->next), n);

		return (0);
}
