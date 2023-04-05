#include "main.h"

/**
 * _strlen_recursion - prints length of string using recursion
 * @s: pointer to sring
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	int find_length(*s)
	{
		if (*s == '\0')
			return (length);
		length++;
		find_length(s + 1);
	}
	return (find_length(s));
}
