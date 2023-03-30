#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer less than, equal to, or greater than 0 if s1
 * is less than, equal to, or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	int i;

	result = 0;
	for (i = 0; result == 0; i++)
	{
		result = *(s1 + i) - *(s2 + i);
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
		{
			return (result);
		}
	}
	return (result);
}
