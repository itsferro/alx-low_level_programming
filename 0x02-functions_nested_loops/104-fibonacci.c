#include <stdio.h>

/**
 * print - prints the sums.
 *
 * @i: the counter
 * @sum: the first sum
 * @sum1: the second sum
 * @sum2: the therd sum
 */
void print(int i, long int sum, long int sum1, long int sum2)
{
	if (i < 91)
		printf("%lu, ", sum);
	else if (!(i == 98))
		printf("%lu%lu, ", sum1, sum2);
	else
		printf("%lu%lu\n", sum1, sum2);
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int pn1, pn2, sum, sum1, sum2;
	long int var11, var12, var21, var22;
	int i, c;

	pn2 = 0;
	pn1 = 1;
	for (i = 0; i < 99; i++)
	{
		if (i < 91)
		{
			sum = pn1 + pn2;
			pn1 = pn2;
			pn2 = sum;
			print(i, sum, sum1, sum2);
		}
		else
		{
			if (i == 91)
			{
				var11 = pn1 / 1000000000;
				var12 = pn1 % 1000000000;
				var21 = pn2 / 1000000000;
				var22 = pn2 % 1000000000;
			}
			else
			{
				var11 = var21;
				var12 = var22;
				var21 = sum1;
				var22 = sum2;
			}
			sum2 = (var12 + var22) % 1000000000;
			c = (var12 + var22) / 1000000000;
			sum1 = var11 + var21 + c;
			print(i, sum, sum1, sum2);
		}
	}
	return (0);
}
