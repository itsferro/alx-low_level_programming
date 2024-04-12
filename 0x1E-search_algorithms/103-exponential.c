#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search_2 - searches for a value in a sorted array of integers
 *	using the Binary search algorithm.
 *
 * @array: an ascending ordered array.
 * @left: the start of the array.
 * @right: the end of the array.
 * @value: the value to search for.
 *
 * Return:
 *	the index where value is located.
 *	-1 If value is not present in array
 *	or if array is NULL.
 */
size_t binary_search_2(int *array, size_t left, size_t right, int value)
{
	size_t m, i;

	while (left <= right)
	{
		m = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%u, ", array[i]);
		printf("%u\n", array[i]);

		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			return (binary_search_2(array, left, (m - 1), value));
		else
			return (binary_search_2(array, (m + 1), right, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *	using the Exponential search algorithm.
 *
 * @array: an ascending ordered array.
 * @size: the number if elements in ther array.
 * @value: the value to search for.
 *
 * Return:
 *	the first index where value is located.
 *	-1 If value is not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (array == NULL || size < 1)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search_2(array, left, right, value));
}
