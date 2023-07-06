#include "main.h"
#include <stdio.h>

/**
 * clear_bit - clears bit at a given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on success, or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ncpy = *n;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	ncpy >>= index;
	ncpy <<= (sizeof(unsigned long int) * 8) - 1;
	ncpy >>= (sizeof(unsigned long int) * 8) - 1;
	ncpy <<= index;
	*n ^= ncpy;

	return (1);
}
