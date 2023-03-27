#include "main.h"

/**
 * puts2 - puts char to stdout with a newline
 * @str: pointer ot string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((i % 2) == 1)
			continue;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
