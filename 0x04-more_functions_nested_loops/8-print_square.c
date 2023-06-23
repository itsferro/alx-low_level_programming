#include "main.h"
/**
 * print_square - prints a square.
 *
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int L, W;

	for (L = 0; L < size; L++)
	{
		for (W = 0; W < size; W++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
