#include "calc.h"
#include <stdio.h>

/**
 * op_add - adds b to a.
 *
 * @a: an intger.
 * @b: an intger.
 *
 * Return: returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b.
 *
 * @a: an intger.
 * @b: an intger.
 *
 * Return: returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b.
 *
 * @a: an intger.
 * @b: an intger.
 *
 * Return: returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 *
 * @a: an intger.
 * @b: an intger.
 *
 * Return: returns the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		exit(100);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 *
 * @a: an intger.
 * @b: an intger.
 *
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		exit(100);
}
