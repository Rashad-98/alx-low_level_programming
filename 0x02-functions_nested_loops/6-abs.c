#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 *@n: number to have its absolute value calculated
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n > 0)
		return (n);
	else
		return (0);
}
