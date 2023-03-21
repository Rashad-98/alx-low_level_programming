#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase ten times
 *
 * Retrun: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int x = 97;

	while (i <= 10)
	{
		while (x <= 122)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
