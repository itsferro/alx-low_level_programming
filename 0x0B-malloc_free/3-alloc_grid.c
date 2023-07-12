#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: an integer
 * @height: an integer
 *
 * Return:
 *	a pointer to a 2 dimensional array of integers.
 *	return NULL on failure
 *	If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, c;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = (int **) malloc(height * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = (int *) malloc(width * sizeof(int));
		if (result[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(result[i]);
				free(result);
			}
				return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			result[i][c] = 0;
		}
	}

	return (result);
}
