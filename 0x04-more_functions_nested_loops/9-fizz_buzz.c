#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char* x3 = "Fizz";
	char* x5 = "Buzz";
	char* x3_x5 = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", x3_x5);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", x3);
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("%s", x5);
			}
			else
			{
				printf("%s ", x5);
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
