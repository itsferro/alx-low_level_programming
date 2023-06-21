#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints what the last digit of a number
 *
 * @n: the function parameter that represents the number
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
