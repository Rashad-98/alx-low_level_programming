#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: number to find factorial of
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
