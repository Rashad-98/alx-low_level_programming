#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints the result of
 * addition of numbers entered as CL arguments
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if a character that is not a number is entered
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int o;
		int i;
		int sum;

		sum = 0;
		for (o = 1; o < argc; o++)
		{
			for (i = 0; *(*(argv + o) + i) != '\0'; i++)
			{
				if (!isdigit(*(*(argv + o) + i)))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(*(argv + o));
		}

		printf("%d\n", sum);
	}

	return (0);
}
