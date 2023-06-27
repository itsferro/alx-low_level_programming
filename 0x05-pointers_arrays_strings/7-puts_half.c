#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: a pointer to a character
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i, n;

	while (str[length] != '\0')
	{
		length++;
	}
	/*length -= 1;*/
	if (length % 2 == 0)
	{
		i = length / 2;
		while (i < length)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		n = ((length - 1) / 2) + 1;
		while (n < length)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
