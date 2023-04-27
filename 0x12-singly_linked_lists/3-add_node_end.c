#include "lists.h"

/**
 * add_node_end - adds a node to a singly linked list at the end
 * @head: pointer to pointer to head of list
 * @str: string to add to list
 *
 * Return: address of new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (!(head == NULL) &&  !(str == NULL))
	{
		list_t *tmp;
		unsigned int i = 0;
		unsigned int len = 0;
		list_t *new = malloc(sizeof(list_t));
		char *nstr = strdup(str);

		if (new == NULL || nstr == NULL)
		{
			free(new);
			free(nstr);
			return (NULL);
		}
		for (i = 0; *(str + i) != '\0'; i++)
			len++;

		new->str = nstr;
		new->len = len;
		new->next = NULL;
		tmp = *head;
		for (i = 0; 1; i++)
		{
			if (*head == NULL)
			{
				*head = new;
				return (new);
			}
			else if (tmp->next == NULL)
			{
				tmp->next = new;
				return (new);
			}
			tmp = tmp->next;
		}
	}
	return (NULL);
}
