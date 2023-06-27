#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *	starting with the first character.
 *
 * @str: a pointer to character
 *
 * Return: void
 */
void puts2(char *str)
{
	char *tmp = str;

	while (*str != '\0')
	{
		if (str == tmp)
		{
			_putchar(*str);
			tmp += 2;
		}
		str++;
	}
	_putchar('\n');
}
