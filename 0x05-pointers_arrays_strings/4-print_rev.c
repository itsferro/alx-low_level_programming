#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @s: a pointer to a character
 *
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s == '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
