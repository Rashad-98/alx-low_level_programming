#include "main.h"

/**
 * print_triangle - prints a triangle to the console
 * @size: length of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int s;
	int o = size;
	int c;
	int sizec = 1;

	while (o > 0)
	{
		s = 1;
		while (s < size)
			{
				_putchar(' ');
				s++;
			}
		c = 0;
		while (c < sizec)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		sizec++; 
		size--;
		o--;
	}
}
