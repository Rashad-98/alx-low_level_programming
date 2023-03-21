#include "main.h"

/**
 * print_alphabet - print the alphabets in lowercase according to ascii
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

