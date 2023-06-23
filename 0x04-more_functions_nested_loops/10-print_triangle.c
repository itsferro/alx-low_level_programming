#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, n, c;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			/* _putchar(i + '0');*/
			for (n = 1; n <= size - i; n++)
			{
				_putchar(' ');
			}
			/*_putchar(n + '0');*/
			for (c = 0; c <= size - n; c++)
			{
				_putchar('#');
			}
			/*_putchar(c + '0');*/
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
