#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: number
 * @m: number2
 *
 * Return: how many bits you need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits = 0;
	unsigned long int difference;

	difference = n ^ m;

	while (difference > 0)
	{
		flip_bits += (difference & 1);
		difference >>= 1;
	}

	return (flip_bits);
}
