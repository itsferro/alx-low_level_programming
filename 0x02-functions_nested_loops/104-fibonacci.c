#include <stdio.h>

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

	for (i = 0; i < 98; i++)
	{
		if (i < 91)
		{
			sum = pn1 + pn2;
			pn1 = pn2;
			pn2 = sum;
			printf("%lu, ", sum);
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
			if (!(i == 97))
				printf("%lu%lu, ", sum1, sum2);
			else
				printf("%lu%lu", sum1, sum2);
		}
	}
	printf("\n");
	return (0);
}
