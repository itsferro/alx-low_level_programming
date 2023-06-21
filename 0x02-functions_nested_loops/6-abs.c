#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: the function parameter the represents the number
 *
 * Return: n if n is begger than or equal to 0
 * and n *-1 it n is smaller than 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
