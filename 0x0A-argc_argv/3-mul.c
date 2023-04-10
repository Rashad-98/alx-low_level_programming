#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two arguments
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 when no arguments are passed
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;
	char str[100];

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 2));
	result  = num1 * num2;
	sprintf(str, "%d", result);
	printf("%s\n", str);

	return (0);
}
