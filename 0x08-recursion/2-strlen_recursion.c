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

	if (*s == '\0')
	{
		return (0);
	}

	length = _strlen_recursion(s + 1);
	return (length++);
}
