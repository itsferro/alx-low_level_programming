#include "main.h"

/**
 * print_alphabet_x10 - prints alphapet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 1;


	while (i <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		i++;
		_putchar('\n');
	}
}
