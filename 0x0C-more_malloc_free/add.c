#include <stdlib.h>
#include <stdio.h>

/**
 * add - takes pointers to arrays of integers
 * adds them and return the result
 * @count: count of numbers to be added together
 * @num: pointer to array of pointers to numbers to be added
 *
 * Return: pointer to array filled with result digits
 */
int *add(int count, int **num)
{
	int o;
	int i;
	int carry;
	int sum;
	int *ptr;

	ptr = malloc(((count * 2) + 2) * sizeof(*ptr));
	carry = 0;
	for (o = 0; o < ((count * 2) + 2); o++)
	{
		sum = 0;
		for (i = 0; i < count; i++)
		{
			sum += *(*(num + i) + o) + (carry % 10);
			carry = carry / 10;
			if (sum > 9)
			{
				*(ptr + ((count * 2) + 2) - 1 - i) = sum % 10;
				carry += sum / 10;
			}
			else
			{
				*(ptr + ((count * 2) + 2) - 1 - i) = sum;
			}
		}

		
	}
}
