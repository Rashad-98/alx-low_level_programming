#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a callback function with
 * each array element as an input
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
