#include "main.h"

/**
 * swap_int - swaps the velues of two integers
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
