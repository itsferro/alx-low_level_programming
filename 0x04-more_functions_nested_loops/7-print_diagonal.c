#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 *
 * @n: the variable that controls the length of the line.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
}
