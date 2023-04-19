#include "3-calc.h"

/**
 * main - takes two values and an operater, then
 * calculates the result based on this operator
 *
 * @argc: argumnets count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *op;
	int n1, n2;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = *(argv + 2);
	n1 = atoi(*(argv + 1));
	n2 = atoi(*(argv + 3));

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(op);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(n1, n2);

	printf("%d\n", result);

	return (0);
}
