#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: an integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int tens = 1, digit, positive = n;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (tens <= positive)
			tens *= 10;
		tens /= 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
