#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination strings
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int y;
	int dest_length;

	i = 0;
	y = 0;
	dest_length = 0;
	while (1)
	{
		if (*(dest + i) == '\0')
		{
			while ((*(src + y) != '\0') || !(y + 1 == n))
			{
				*(dest + dest_length + y) = *(src + y);
				y++;
			}
			return (dest);
		}
		dest_length++;
		i++;
	}
}
