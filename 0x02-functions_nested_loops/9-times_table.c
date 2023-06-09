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

			if (result > 9)
			{
				int tens = result / 10;
				int units = result % 10;

				_putchar(' ');
				_putchar('0' + tens);
				_putchar('0' + units);
			}
			else
			{
				if (n > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + result);
			}
			if (n < 9)
				_putchar(',');
			n++;
		}
		_putchar('\n');
		x++;
	}
}
