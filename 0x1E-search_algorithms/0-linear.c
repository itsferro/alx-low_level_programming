#include <stdio.h>
#include "search_algos.h"

/*
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: an array to search in.
 * @size: the size of the array.
 * @value: the value to search for.
 *
 * Return:
 *	the first index where value is located.
 *	-1 If value is not present in array
 *	or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
