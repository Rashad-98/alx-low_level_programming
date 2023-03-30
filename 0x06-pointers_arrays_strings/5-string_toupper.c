#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((*(str + i) >= 97) && !(*(str + i) > 122))
			*(str + i) -= 32;
	}

	return (str);
}
