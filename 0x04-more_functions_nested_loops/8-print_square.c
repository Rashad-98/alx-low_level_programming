#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of line
 *
 * Retrun: void
 */
void print_square(int n)
{
	int n2 = n;
	int n1;

	if (n > 0)
	{
		while (n2 > 0)
		{
			n1 = n;
			while (n1 > 0)
			{
				_putchar('#');
				n1--;
			}
			_putchar('\n');
			n2--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
