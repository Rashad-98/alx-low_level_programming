#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half the string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length;
	int n;
	int x;

	i = 0;
	length = 0;
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}

	if ((length % 2) == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	x = 0;
	while (x < n)
	{
		_putchar(*(str + length - n + x));
			x++;
	}
	_putchar('\n');
}
