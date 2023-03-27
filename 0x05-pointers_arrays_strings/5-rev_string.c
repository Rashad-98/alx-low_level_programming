#include "main.h"

/**
 * rev_string - prints string iin revers
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;
	int x;
	int tmp;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	x = 0;
	while (x <= ((length / 2) - 1))
	{
		tmp = *(s + length - 1 - x);
		*(s + length - 1 - x) = *(s + x);
		*(s + x) = tmp;
		x++;
	}
}
