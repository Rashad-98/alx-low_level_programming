#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an array
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to callback function
 *
 * Return: element index of -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	else if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}

		return (-1);
	}

	return (-1);
}
