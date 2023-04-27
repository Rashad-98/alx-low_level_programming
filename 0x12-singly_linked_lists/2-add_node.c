#include "lists.h"

/**
 * add_node - adds a node to a singly linked list
 * @head: pointer to pointer to head of list
 * @str: pointer to string to add
 *
 * Return: pointer to newly created element and
 * NULL of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, len;
	char *nstr = strdup(str);
	list_t *new = malloc(sizeof(size_t));

	if (new == NULL || nstr == NULL || str == NULL || head == NULL)
		return (NULL);

	len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	new->len = len;
	new->str = nstr;
	new->next = *head;

	*head = new;

	if (new == NULL || *head == NULL)
		return (NULL);

	return (new);
}
