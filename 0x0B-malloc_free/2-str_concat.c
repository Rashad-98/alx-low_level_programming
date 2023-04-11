#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int i;
	int s1length;
	int s2length;

	s1length = 0;
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			s1length++;
	}

	s2length = 0;
	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i) != '\0'; i++)
			s2length++;
	}

	nstr = malloc((sizeof(char) * (s1length + s2length)) + 1);
	if (nstr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < s1length; i++)
			*(nstr + i) = *(s1 + i);
	}

	if (s2 != NULL)
	{
		for (i = 0; i < s2length; i++)
			*(nstr + s1length - 1 + i) = *(s2 + i);
	}

	*(nstr + s1length + s2length) = '\0';

	return (nstr);
}
