#include <stdio.h>

/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int what_is_left, sum,  i;

	sum = 0;
	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
