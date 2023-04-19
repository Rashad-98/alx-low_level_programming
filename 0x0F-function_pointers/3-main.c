#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * main - takes two values and an operater, then
 * calculates the result based on this operator
 *
 * @argc: argumnets count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	if (argc = 5)
	{
		printf("hello");
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		char *op = *(argv + 2);
		int n1 = atoi(*(argv + 1));
		int n2 = atoi(*(argv + 3));
		int (*f)(int, int);
		int result;

		if ((*op == '/' || *op == '%') && n2 == 0)
		{
			printf("Error\n");
			exit(100);
		}

		f = get_op_func(op);
		if (f == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		result = f(n1, n2);

		printf("%d\n", result);

		return (0);
	}
}
