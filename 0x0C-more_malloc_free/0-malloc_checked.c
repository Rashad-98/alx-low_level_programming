#include <stdlib.h>

/**
 * malloc_checked - terminates process with status value of 98 if malloc fails
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
