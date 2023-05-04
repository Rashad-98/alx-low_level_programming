#include "main.h"
#include <stdio.h>

/**
 * get_length - find length of string of characters
 * @str: pointer to string
 *
 * Return: unsigned integer value
 */
unsigned int get_length(const char *str)
{
	unsigned int length = 0;
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		length++;

	printf("length: %u\n", length);

	return (length);
}

/**
 * _pow - calculates a number to a power
 * @n: number
 * @p: power
 *
 * Return: result
 */
int _pow(int n, int p)
{
	int result = 1;

	while (p)
	{
		result = result * n;
		p--;
	}

	printf("power: %d\n", result);
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to string of characters (0 and 1)
 *
 * Return: unsigned integer value of, 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_uint;
	unsigned int i, len, place;

	if (b == NULL)
		return (0);

	len = get_length(b);

	num_uint = 0;
	for (i = len; i > 0; i--)
	{
		place = len - i;

		if (*(b + i - 1) == '1')
		{
			num_uint += _pow(2, place);
		}
		else if (*(b + i - 1) != '0')
		{
			return (0);
		}
	}

	return (num_uint);
}
