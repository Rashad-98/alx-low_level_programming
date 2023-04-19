#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 *
 * Return: integer sum of two numbers
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts a number from a number
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	int result = a - b;

	return (result);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	int result = a * b;

	return (result);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_div(int a, int b)
{
	int result = a / b;

	return (result);
}

/**
 * op_mod - finds remainder of division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	int result = a % b;

	return (result);
}
