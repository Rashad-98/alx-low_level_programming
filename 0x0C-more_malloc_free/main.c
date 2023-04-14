#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  main - program for testing
 *
 *  Return: 0 always
 */
int main(void)
{
	char str[] = "24592";
	int *p;

	printf("string: %s\n", str);
	p = str_to_int(str);
	printf("number: %d\n", *(p + 1));

	return (0);
}
