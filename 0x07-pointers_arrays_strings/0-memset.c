#include "main.h"

/**
 * _memset - sets a buffer
 * @s: pointer to buffer
 * @b: character to place
 * @n: number of bytes to change
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
