#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	char n;

	n = '0';

	for (n = 0; n <= 10; i++)
	{
		while (n <= '14')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
