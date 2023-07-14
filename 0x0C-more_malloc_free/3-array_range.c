#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: an integer
 * @max: an integer
 *
 * Return:
 *	the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a;
	unsigned int c, i;

	if (min >= max)
		return (NULL);

	c = (max - min) + 1;

	a = malloc(sizeof(int) * c);

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= c; i++)
		a[i] = min + i;

	return (a);
}
