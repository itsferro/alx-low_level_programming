#include "main.h"

/**
 * print_times_table - print the times table for number n
 *
 * @n: the number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
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
}
