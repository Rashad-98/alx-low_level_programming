#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int y;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
		{
			for (y = i; y < n; y++)
			{
				*(dest + y) = '\0';
			}
			return (dest);
		}
		*(dest + i) = *(src + i);
	}
	return (dest);
}
