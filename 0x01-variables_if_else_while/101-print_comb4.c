#include <stdio.h>

/**
  * main - Prints a serie of 3digit numbers with commas
  *
  * Return: Always (Success);
  */
int main(void)
{
	int n;
	int n1;
	int n2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = (1 + n); n1 <= '9'; n1++)
		{
			for (n2 = (1 + n1); n2 <= '9'; n2++)
			{
				putchar(n);
				putchar(n1);
				putchar(n2);
				if (n != '7' || n1 != '8' || n2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
