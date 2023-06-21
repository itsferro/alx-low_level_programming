#include <stdio.h>
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
				int n1 = j * i;

				if (j == 0)
				{
					printf("%d", n);
				} else if (n1 <= 9)
				{
					printf(",   %d", n);
				} else
				{
					printf(",  %d", n);
				}
			}
			printf('\n');
		}
	}
}
