#include "main.h"

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n == 98)
		{
			_putchar('0' + n);
			return;
		}
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n++;
	}

	while (n > 99)
	{
		if (n == 98)
		{
			_putchar('0' + n);
			return;
		}
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
