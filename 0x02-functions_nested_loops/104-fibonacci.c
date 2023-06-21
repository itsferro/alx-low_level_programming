#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int pn1, pn2, vh;
	int i;

	pn2 = 0.0;
	pn1 = 1.0;

	for (i = 0; i < 98; i++)
	{
		vh = pn1;
		pn1 = pn1 + pn2;
		pn2 = vh;
		if (i < 97)
		{
			printf("%lu, ", pn1);
		}
		else
		{
			printf("%lu", pn1);
		}
	}
	printf("\n");
	return (0);
}
