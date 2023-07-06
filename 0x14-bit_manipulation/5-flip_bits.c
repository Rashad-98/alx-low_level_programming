#include "main.h"

/**
 * flip_bits - get numebr of bits needed to be flipped to get to a number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	n ^= m;
	for (i = 0; n > 0; i++)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}

	return (count);
}
