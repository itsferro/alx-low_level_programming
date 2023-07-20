#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: a string used to seaprate the strings.
 * @n: a const unsigned integer, the number of strings passed to the function.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list the_strings;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(the_strings, n);

		for  (i = 0; i < n; i++)
		{
			s = va_arg(the_strings, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");

			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
		va_end(the_strings);
	}
	printf("\n");
}
