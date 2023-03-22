#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	int x = n;

	while (x < 99)
	{
		if (x == 98)
		{
			_putchar('0' + x);
			return;
		}
		_putchar('0' + x);
		_putchar(',');
		_putchar(' ');
		x++;
	}

	while (x >= 98)
	{
		if (x == 98)
		{
			printf("%d\n", x);
		}
		printf("%d, ", x);
		x--;
	}
}
