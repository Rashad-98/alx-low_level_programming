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
	int ii;

	while (o <= 57)
	{
		i = 49;
		while (i <= 57)
		{
			ii = 50;
			while (ii <= 57)
			{
				if (o != i && o != ii && i != ii)
				{
					if (!(o > i) && !(o > ii) && !(i > ii))
					{
						putchar(o);
						putchar(i);
						putchar(ii);
						if (o != 55)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				ii++;
			}
			i++;
		}
		o++;
	}

	putchar('\n');

	return (0);
}
