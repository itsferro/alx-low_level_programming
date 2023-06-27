#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout.
 *
 * @s: a pointer to a character
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *f = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != *f)
	{
		_putchar(*s);
		s--;
	}
	_putchar(*f);
	_putchar('\n');
}
