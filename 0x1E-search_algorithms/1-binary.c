#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array.
 *
 * @array: an array to print.
 * @l: the start of the array index.
 * @r: the end of the array index.
 *
 * Return: void.
 */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (; l <= r; l++)
	{
		printf("%u", array[l]);
		if (l < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *	using the Binary search algorithm.
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
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		m = l + (r - l) / 2;
		print_array(array, l, r);
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	return (-1);
}
