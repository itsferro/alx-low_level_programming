#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *	using the Jump search algorithm.
 *
 * @array: a sorted array.
 * @size: the size of the array.
 * @value: the value to search for.
 *
 * Return:
 *	the first index where value is located.
 *	-1 If value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, m, l, r;

	if (array == NULL || size < 1)
		return (-1);

	m = sqrt(size);
	l = 0;
	r = 0;

	while (l < size)
	{
		if (value <= array[r])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l, r);
			if (r >= size)
				r = size - 1;
			for (i = l; i <= r; i++)
			{
				printf("Value checked array[%lu] = [%u]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		else if (r < size)
		{
			printf("Value checked array[%lu] = [%u]\n", r, array[r]);
		}
		l = r;
		r += m;
	}

	return (-1);

}
