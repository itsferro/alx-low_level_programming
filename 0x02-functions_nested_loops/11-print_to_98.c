#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the input number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
