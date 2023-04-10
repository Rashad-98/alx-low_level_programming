#include <stdio.h>

/**
 * main - program that prints arguments it recieves
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
