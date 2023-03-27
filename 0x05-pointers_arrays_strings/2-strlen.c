#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
