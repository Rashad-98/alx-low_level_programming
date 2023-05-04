#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, ncpy, bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bits = 0;
	ncpy = n;
	for (i = 0; i < 20; i++)
	{
		if (ncpy == 1)
		{
			_putchar('1');
			bits = i + 1;
			break;
		}
		ncpy >>= 1;
	}

	ncpy = n;
	for (i = 2; i <= bits; i++)
	{
		ncpy >>= bits - i;
		_putchar((ncpy & 1) + '0');
		ncpy = n;
	}
}
