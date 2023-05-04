#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ncpy = *n;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	ncpy >>= index;
	ncpy |= 1;
	ncpy <<= index;
	*n |= ncpy;

	return (1);
}
