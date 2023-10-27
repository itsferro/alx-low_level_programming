#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 *
 * @n: an unsigned integer number.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return:
 *	the value of the bit at index index.
 *	-1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~mask);
	return (1);
}
