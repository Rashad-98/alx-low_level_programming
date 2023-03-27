#include "main.h"

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
	while (*(str + i) != '\n')
	{
		length++;
		i++;
	}

	if ((length % 2) == 1)
		n = length / 2;
	else
		n = (length - 1) / 2;

	x = 0;
	while (x <= n)
	{
		_putchar(*(str + length - 1 - n))
			x++;
	}
	_putchar('\n');
}
