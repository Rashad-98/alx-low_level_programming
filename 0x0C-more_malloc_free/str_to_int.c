#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_to_int - converts string to integer
 * @str: pointer to string
 *
 * Return: pointer to array of integers
 */
int *str_to_int(char *str)
{
	int *ptr;
	int i;

	ptr = malloc(strlen(str) * sizeof(*ptr));
	if (ptr == NULL)
		printf("couldn't do it inside str_to_int");
	for (i = 0; *(str + i) != '\0'; i++)
		*(ptr + i) = *(str + i) - 48;

	return (ptr);
}
