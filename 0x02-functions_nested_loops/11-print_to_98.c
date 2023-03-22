#include "main.h"
#include <stdio.h>

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
		printf("%d\n", x);
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
