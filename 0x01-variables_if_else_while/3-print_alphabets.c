#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;
	int y = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++
	}
	putchar('\n');

	return (0);
}
