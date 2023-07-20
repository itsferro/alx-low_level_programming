#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: a string used to seaprate the number.
 * @n: a const unsigned integer, the number of integers passed to the function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list the_numbers;
	unsigned int i;

	if (n > 0)
	{
		va_start(the_numbers, n);

		for  (i = 0; i < n; i++)
		{
			printf("%d", va_arg(the_numbers, int));
			if (separator != NULL)
			{
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		va_end(the_numbers);
	}
	printf("\n");
}
