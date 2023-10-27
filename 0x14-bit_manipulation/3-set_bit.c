#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1.
 *
 * @n: an unsigned integer number.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return:
 *	the value of the bit at index index.
 *	-1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n | mask);
	return (1);
}
