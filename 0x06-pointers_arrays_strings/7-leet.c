#include "main.h"

/**
 * leet - encodes in leet
 * @str: pointer to string to be encoded
 *
 * Return: str
 */
char *leet(char *str)
{
	int o;
	int i;
	char lwr[] = {'a', 'e', 'o', 't', 'l'};
	char upr[] = {'A', 'E', 'O', 'T', 'L'};
	char enc[] = {'4', '3', '0', '7', '1'};

	o = 0;
	while (*(str + o) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if ((*(str + o) == lwr[i]) || (*(str + o) == upr[i]))
				*(str + o) = enc[i];
			i++;
		}
		o++;
	}

	return (str);
}
