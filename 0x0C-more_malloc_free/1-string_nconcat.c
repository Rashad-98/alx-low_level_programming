#include <stdlib.h>

/**
 * string_nconcat - concatenates strings with n bytes from the second string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from second string
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1length;
	unsigned int s2length;
	char *ns;

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

	if (n >= s2length)
		n = s2length;

	ns = malloc(s1length + n + 1);
	if (ns == NULL)
		return (NULL);

	for (i = 0; i < s1length; i++)
		*(ns + i) = *(s1 + i);

	for (i = 0; i < n; i++)
		*(ns + s1length + i) = *(s2 + i);

	*(ns + s1length + n) = '\0';

	return (ns);
}
