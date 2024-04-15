#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_logic - searches for a value in a sorted array of integers.
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
int advanced_binary_logic(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%u, ", array[i]);
	printf("%u\n", array[i]);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
	{
		return (mid);
	}
	if (array[mid] >= value)
		return (advanced_binary_logic(array, left, mid, value));
	return (advanced_binary_logic(array, (mid + 1), right, value));

}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 *
 * @array: an ascending ordered array.
 * @size: the number if elements in ther array.
 * @value: the value to search for.
 *
 * Return:
 *      the index where value is located.
 *      -1 If value is not present in array
 *      or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);

	return (advanced_binary_logic(array, 0, size - 1, value));
}
