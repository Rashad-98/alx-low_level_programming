#include "main.h"

/**
 * print_rev - prints string iin revers
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
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

	while (length > 0)
	{
		_putchar(*(length - 1));
		length--;
	}
	_putchar('\n');
}
