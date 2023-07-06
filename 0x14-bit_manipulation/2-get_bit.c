#include "main.h"

/**
 * get_bit - gets bit at given index
 * @n: number
 * @index: index
 *
 * Return: value of bit, or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;
	return (n & 1);
}
