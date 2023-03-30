#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array to be reversed
 * @n: number of elements to revers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(a + n - 1 - i);
		*(a + n - 1 - i) = *(a + i);
		*(a + i) = tmp;
	}
}
