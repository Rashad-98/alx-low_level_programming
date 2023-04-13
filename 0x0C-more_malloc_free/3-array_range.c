#include <stdlib.h>

/**
 * array_range - create an array of integers filled with
 * numbers from @min to @max
 * @min: first number in array
 * @max: last number in array
 *
 * Return: pointer to newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *ptr;
		int length;
		int i;

		length = 0;
		for (i = min; i <= max; i++)
			length++;

		ptr = malloc(sizeof(*ptr) * length);
		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < length; i++)
		{
			*(ptr + i) = min;
			min++;
		}

		return (ptr);
	}
}
