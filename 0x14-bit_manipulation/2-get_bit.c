#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: an integer number.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return:
 *	the value of the bit at index index.
 *	-1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > sizeof(unsigned long int))
		return (-1);

	if index turn (n & mask ? 1 : 0);
}
