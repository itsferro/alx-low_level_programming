#include <stdio.h>
#include "search_algos.h"

/**
 * calculate_index - calculats the index where the valuse maybe located.
 *
 * @index_l: the first index in an array.
 * @index_h: the last index in an array.
 * @l: the value at the first index.
 * @h: the value at the last index.
 * @value: the value to search for.
 *
 * Return:
 *	the index caculated.
 */
size_t calculate_index(size_t index_l, size_t index_h, int l, int h, int value)
{
	return (index_l + (((double)(index_h - index_l) / (h - l)) * (value - l)));
}

/**
 * interpolation_search - searches for a value
 *	in a sorted array of integers
 *	using the Interpolation search algorithm.
 *
 * @array: a sorted array.
 * @size: the size of the array.
 * @value: the value to search for.
 *
 * Return:
 *	the first index where value is located.
 *	-1 If value is not present in array
 *	or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, index, index_l, index_h;
	int l, h;

	if (array == NULL || size < 1)
		return (-1);

	index_l = 0;
	index_h = size - 1;
	l = array[index_l];
	h = array[index_h];

	index = calculate_index(index_l, index_h, l, h, value);
	for (i = 0; i < size; i++)
	{
		if (index < size)
		{
			printf("Value checked array[%lu] = [%u]\n", index, array[index]);
			if (array[index] == value)
			{
				return (index);
			}
			else if (array[index] < value)
			{
				index_l = index + 1;
				l = array[index_l];
			}
			else
			{
				index_h = index - 1;
				h = array[index_h];
			}
			index = calculate_index(index_l, index_h, l, h, value);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", index);
			return (-1);
		}
	}
	return (-1);
}
