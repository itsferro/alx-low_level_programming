#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int pn1, pn2, vh;
	int i;

	pn2 = 0;
	pn1 = 1;

	for (i = 0; i < 50; i++)
	{
		vh = pn1;
		pn1 = pn1 + pn2;
		pn2 = vh;
		if (i < 49)
		{
			printf("%ld, ", pn1);
		}
		else
		{
			printf("%ld", pn1);
		}
	}
	printf("\n");
	return (0);
}
