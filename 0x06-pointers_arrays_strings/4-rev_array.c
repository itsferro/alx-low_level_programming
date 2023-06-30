#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array of integers
 * @n: an integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
