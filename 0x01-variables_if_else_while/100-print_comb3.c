#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int o = 48;
	int i;

	while (o <= 57)
	{
		i = 49;
		while (i <= 57)
		{
			if (o != i)
			{
				if (!(o > i))
				{
					putchar(o);
					putchar(i);
					if (o != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			i++;
		}
		o++;
	}

	putchar('\n');

	return (0);
}
