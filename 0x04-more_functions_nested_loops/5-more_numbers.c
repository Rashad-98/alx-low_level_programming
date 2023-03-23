#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int o;

	for (o = 0; o < 10; o++)
	{
		int i;

		for (i = 0; i < 15; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
