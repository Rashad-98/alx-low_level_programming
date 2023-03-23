#include "main.h"

/**
 * print_diagonal - prints a diagonal to the console
 * @n: length of the diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (n > 0)
		{
			int i = 0;

			while (i < x)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			x++;
		}
	}
}
