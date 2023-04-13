#include <stdlib.h>

/**
 * _realloc - same as realloc
 * @ptr: pointer to old memory location
 * @old_size: old size allocated for ptr
 * @new_size: new size
 *
 * Return: pointer to new block in memory of NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		void *nptr;

		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		char *nptr;
		int i;
		int length;

		if (old_size < new_size)
			length = old_size;
		else
			length = new_size;

		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);

		for (i = 0; i < length; i++)
			*(nptr + i) = *((char *)ptr + i);

		free(ptr);

		return ((void *)nptr);
	}
}
