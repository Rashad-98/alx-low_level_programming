#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of line
 *
 * Retrun: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
