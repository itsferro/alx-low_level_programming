#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long smallest_prime_factor = 2;

	while (smallest_prime_factor < num)
	{
		if (num % smallest_prime_factor == 0)
		{
			num = num / smallest_prime_factor;
			smallest_prime_factor = 2;
		}
		else
			smallest_prime_factor++;
	}
	printf("%lu\n", num);
	return (0);
}
