#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: an integer
 * @y: an integer
 *
 * Return: -1 If y is lower than 0
 *	otherwise returns x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	return (n * _pow_recursion(n, y - 1));
}
