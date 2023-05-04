#include "main.h"

/**
 * flip_bits - counts number of bits needed go from n to m
 * @n: first number
 * @m: second number
 *
 * Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int common, unique, i, bits;

	common = n & m;
	n ^= common;
	m ^= common;
	unique = n | m;

	if (unique == 0)
		return (0);

	bits = 0;
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((unique >> i) == 1)
		{
			bits++;
			break;
		}
		if ((unique >> i) & 1)
			bits++;
	}

	return (bits);
}
