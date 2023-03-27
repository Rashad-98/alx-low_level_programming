#include "main.h"

/**
 * print_rev - prints string iin revers
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	char revstr[];
	int x;

	x = 0;
	while (x < length)
	{
		revstr[x] = *(s + length - 1);
		x++;
	}

	return (revstr);
}
