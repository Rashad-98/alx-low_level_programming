#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 48;
	int y = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
