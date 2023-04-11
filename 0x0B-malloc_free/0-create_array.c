#include <stdlib.h>

/**
 * create_array - dynamically allocates memory and fills it with a character
 * @size: number of bytes to be allocated
 * @c: character to fill the memory with
 *
 * Return: pointer to first byte allocated
 */
char *create_array(unsigned int size, char c)
{
	char *cp;
	int i;

	cp = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		*(cp + i) = c;
	}

	return (cp);
}
