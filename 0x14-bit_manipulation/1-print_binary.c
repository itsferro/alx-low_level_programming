#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: an integer.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit_count, size, mask = 1;

	size = (sizeof(unsigned long int)) * 4;
	/*printf("-----------------------\n%ld\t%ld\n", size, mask);*/
	mask = mask << size;
	/*printf("%ld\t%ld\n\n", size, mask);*/

	for (bit_count = 0; bit_count <= size; bit_count++)
	{
		_putchar(n & mask ? '1' : '0');
		n <<= 1;
	}
}
