#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to it
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
