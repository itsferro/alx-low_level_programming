#include "main.h"
/**
 * prime_test_function - checks recursevly if the number
 *	is a prime number
 *
 * @n: an integer
 * @devider: an integer
 *
 * Return: 1 if the input integer is a prime number
 *	otherwise return 0.
 */
int prime_test_function(int n, int devider)
{
	if (devider > n)
		return (0);
	if (n % devider == 0 && devider != n)
		return (1);
	else
		prime_test_function(n, devider++);
}

/**
 * is_prime_number - checks if the number
 *	is a prime number
 *
 * @n: an integer
 *
 * Return: 1 if the input integer is a prime number
 *	otherwise return 0.
 */
int is_prime_number(int n)
{
	int devider = 2;

	prime_test_function(n, devider);
}
