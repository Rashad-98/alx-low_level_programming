#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
