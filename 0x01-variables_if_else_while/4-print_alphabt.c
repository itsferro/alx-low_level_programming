#include <stdio.h>

/**
  * main - Prints alphabet letters in lowercase  exept e and z
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
