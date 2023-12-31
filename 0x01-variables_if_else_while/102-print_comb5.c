#include <stdio.h>

/**
 * main - prints  numbers from 00 01-98 99
 * but no repeats (00 01, 00 02, 00 03,...)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			o = ones + 1;
			for (t = tens; t <= '9'; t++)
			{
				for (; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);
					/* check for the last iteration */
					if (tens != '9' || ones != '8' || t != '9' || o != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
