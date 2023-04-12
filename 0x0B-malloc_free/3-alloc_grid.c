#include <stdlib.h>

/**
 * alloc_grid - make two dimensional array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to pointer to first element
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int **matrix;
		int i;
		int j;

		*matrix = malloc(sizeof(int) * width * height);
		if (*matrix == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			matrix + i = &(*matrix + (i * width));
			for (j = 0; j < width; j++)
			{
				*(*matrix + (i * width) + j) = 0;
			}
		}

		return (matrix);
	}
}
