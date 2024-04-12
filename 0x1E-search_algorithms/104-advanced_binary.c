#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 *
 * @array: an ascending ordered array.
 * @size: the number if elements in ther array.
 * @value: the value to search for.
 *
 * Return:
 *	the index where value is located.
 *	-1 If value is not present in array
 *	or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right, mid, i, result = -1;

	left = 0;
	right = size - 1;

	while (left <= right)
	{	mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%u, ", array[i]);
		printf("%u\n", array[i]);

		if (array[mid] == value && (mid == left || array[mid - 1] != value))
		{
			result = mid;
			right = mid - 1;
		}
		else if (array[mid] >= value)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (result);
}
