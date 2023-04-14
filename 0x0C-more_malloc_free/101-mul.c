#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - program that print the result of multiplication of
 * two positive numbers
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	char *s1;
	char *s2;
	int *n1;
	int *n2;
	int **addend;
	int o;
	int i;
	int carry;
	int result;
	unsigned int s1length;
	unsigned int s2length;
	unsigned int longer;
	int length;

	s1length = strlen(*(argv + 1));
	s2length = strlen(*(argv + 2));
	if (s1length < s2length)
		longer = s2length;
	else
		longer = s1length;

	n1 = str_to_int(*(argv + 1));
	n2 = str_to_int(*(argv + 2));
	
	printf("n1--->");
	for (i = 0; i < 2; i++)
		printf("%d ", n1[i]);
	printf("\n");
	printf("n2--->");
	for (i = 0; i < 2; i++)
		printf("%d ", n2[i]);

	addend = malloc(s1length * sizeof(*addend));
	printf("hello right after addend\n");
	if (addend == NULL)
		printf("couldn't do it\n");
	for (o = 0; o < s1length; o++)
	{
		result = 0;
		carry = 0;
		*(addend + o) = malloc((longer + 1 + o) * sizeof(**addend));
		*(*(addend + o) + longer + o) = 0;
		printf("hello after addend + o\n");
		if (*(addend + o) == NULL)
			printf("couldn't do it inside %d\n", o);
		for (i = 0; i < s2length; i++)
		{
			result = (*(n1 + s1length - 1 - o) * *(n2 + s2length - 1 - i)) + carry;
			printf("result: %d\n", result);
			if (result > 9)
			{
				*(*(addend + o) + longer - i) = result % 10;
				carry = result / 10;
			}
			else
			{
				*(*(addend + o) + longer - i) = result;
				carry = 0;
			}
			printf("whatever is in addend: %d\n", *(*(addend + o) + longer - i));
		}
		*(*(addend + o) + longer - i) = carry;
		printf("last carry added to addends: %d\n", *(*(addend + o) + longer - i));
	}
	printf("hello at the end\n");
	printf("%d\n", **addend);
	printf("line of addends:\n");
	for (i = 0; i < 6; i++)
		printf("%d ", *(*(addend + 1) + i));
	printf("\n");


	
	/*for (o = 0; o < 4; o++)
	{
		for (i = 0; i < 4; i++)
		{
			printf("%d\n", *(*(addend + o) + i));
		}
	}*/

	return (0);
}
