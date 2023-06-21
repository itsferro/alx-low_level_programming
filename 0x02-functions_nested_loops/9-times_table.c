#include "holberton.h"

/**
 * times_table - print the times table for number 9
 *
 * @i: counter for the first loop witch represents the columns
 * @j: counter for the second loop witch represents the rows
 * @n: represent the number that wil be printed
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int n = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
