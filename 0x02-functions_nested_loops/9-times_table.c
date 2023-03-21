#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Return: void
 */
void times_table(void)
{
	int x = 0;

	while (x <= 9)
	{
		int n = 0;

		while (n <= 9)
		{
			int result = n * x;
			_putchar('0' + result);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('$');
		_putchar('\n');
		x++;
	}
}
