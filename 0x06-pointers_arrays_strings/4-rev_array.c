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
	int tmp[], i;

	tmp = 0;
	if (n % 10 == 0)
	{
		for (i = 0; i <= n; i++)
		{
			n -= i;
			tmp[i] = a[i];
			a[i] = a[n];
			a[n] = tmp[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			n -= i;
			tmp[i] = a[i];
			a[i] = a[n];
			a[n] = tmp[i];
		}
	}
}
