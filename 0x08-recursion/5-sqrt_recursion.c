#include "main.h"

/**
 * find_root - finds the square root of n
 *	starting from the smallest possible "0"
 *
 * @n: an integer
 * @root: an integer
 *
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: an integer
 *
 * Return: -1 If n does not have a natural square root
 *	otherwise returns the natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
