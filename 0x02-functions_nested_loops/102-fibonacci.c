#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int pn1, pn2, vh, i;

	pn2 = 1;
	pn1 = 2;

	printf("%d, ", pn2);
	ptintf("%d, ", pn1);
	for (i = 0; i <= 50; i++)
	{
		vh = pn1;
		pn1 += pn2;
		pn2 = vh;
		if (i <= 50)
		{
			printf("%d, ", pn1);
		}
		else
		{
			printf("%d", pn1);
		}
	}
	printf("\n");
	return (0);
}
