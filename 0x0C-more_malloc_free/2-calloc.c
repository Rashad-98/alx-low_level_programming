#include <stdlib.h>

/**
 * _calloc - same as calloc. (man calloc)
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr;
		unsigned int i;
		
		ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
		
		for (i = 0; i < (nmemb * size); i++)
			*(ptr + i) = '\0';

		return ((void *)ptr);
	}
}
