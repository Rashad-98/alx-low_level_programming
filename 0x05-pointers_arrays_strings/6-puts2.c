#include "main.h"

/**
 * _puts - puts char to stdout with a newline
 * @str: pointer ot string
 *
 * Return: void
 */
void _puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
		_putchar('\n');
	}
}
