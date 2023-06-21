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
		what_is_left = i % 3;
		if (what_is_left == 0)
		{
			sum = sum + i;
		}
		what_is_left = i % 5;
		else if (what_is_left == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
