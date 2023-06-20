#include <stdio.h>

/**
  * main - Prints a serie of 2digit numbers with commas
  *
  * Return: Always (Success);
  */
int main(void)
{
	int n;
	int n1;

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = (1 + n); n1 <= '9'; n1++)
		{
			putchar(n);
			putchar(n1);
			if (n != '8' || n1 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar("\n");
	return (0);

}
