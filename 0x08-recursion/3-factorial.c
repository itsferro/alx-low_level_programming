#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: an integer
 *
 * Return: -1 If n is lower than 0
 *	otherwise returnsx the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
