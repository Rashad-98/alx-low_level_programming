#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: the number which its last digit to be printed
 *
 * Retrun: the last digit of a number as integer
 */
int print_last_digit(int n)
{
	int last_digit = ((n * n)/n) % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
