#include "main.h"

/**
 * cap_string - capitaizes each word
 * @str: string
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i;
	int y;
	char *prev;
	int separators[] = {32, 9, 11, 10, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	prev = str;
	if ((*prev >= 97) && (*prev <= 122))
		*prev -= 32;

	i = 1;
	while (*(str + i) != '\0')
	{
		y = 0;
		while (y < 15)
		{
			if ((*prev == separators[y]) && ((*(str + i) >= 97) && (*(str + i) <= 122)))
			{
				*(str + i) -= 32;
			}
			y++;
		}
		prev = str + i;
		i++;
	}
	return (str);
}
