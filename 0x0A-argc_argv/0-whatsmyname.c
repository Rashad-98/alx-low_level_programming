#include <stdio.h>

/**
 * main - this program prints the its name
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
