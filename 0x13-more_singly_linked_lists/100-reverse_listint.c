#include "lists.h"

/**
 * traverse_listint - reverses list
 * @old_head: old head
 */
listint_t *traverse_listint(listint_t *old_head, listint_t *new_head)
{
	if (!(old_head->next))
		return (old_head);
	old_head = old_head->next;

	new_head = traverse_listint(old_head, NULL);
	new_head->next = old_head;
	return (old_head);
}

/**
 * reverse_listint - reverses singly linked list
 * @head: pointer to pointer to head
 *
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	int i;
	listint_t *current = *head;
	
	for (i = 0; current->next; i++)
	{
		current = current->next;
	}
	traverse_listint(*head, current)->next = *head;
	
	(*head)->next = NULL;

	*head = current;

	return (current);
}
