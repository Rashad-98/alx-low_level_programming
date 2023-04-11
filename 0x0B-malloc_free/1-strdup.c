#include <stdlib.h>

/**
 * _strdup - copies string and returns pointer to
 * the dynamically allocated copy
 * @str: pointer to string to copy
 *
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *strcp;
		int i;
		int length;

		length = 0;
		for (i = 0; *(str + i) != '\0'; i++)
		{
			length++;
		}

		strcp = malloc((sizeof(char) * length) + 1);

		if (strcp == NULL)
			return (NULL);

		for (i = 0; *(str + i) != '\0'; i++)
		{
			*(strcp + i) = *(str + i);
		}
		*(strcp + length) = '\0';

		return (strcp);
	}
}
