#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers to 98
 * @n: point of beginning
 *
 * Return: void
 */
void print_to_98(int n)
{
	int x = n;

	while (x < 99)
	{
		if (x == 98)
		{
			printf("%d\n", x);
			return;
		}
		printf("%d, ", x);
		x++;
	}

	while (x >= 98)
	{
		if (x == 98)
		{
			printf("%d\n", x);
			return;
		}
		printf("%d, ", x);
		x--;
	}
}
