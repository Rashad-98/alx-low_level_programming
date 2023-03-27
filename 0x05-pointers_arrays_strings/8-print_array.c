#include "main.h"

/**
 * print_array - prints elements of array
 * @a: pointer to array
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + i));
			return;
		}
		printf("%d, ", *(a + i);
	}
}
