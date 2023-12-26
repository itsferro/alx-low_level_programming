#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_buffer - prints a buffer.
 *
 * @b: a pointer to a string.
 * @size: the size of the characters that needed to be printed.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	char buffer[10];
	int i, j, index = 0;

	if (size <= 0)
		printf("\n");

	while (size > 0)
	{
		printf("%08x: ", index);
		for (i = 1; i < 11 && size > 0; i++)
		{
			buffer[i - 1] = *b;
			if (i % 2 != 0)
				printf(" %02x", buffer[i - 1]);
			else
				printf("%02x ", buffer[i - 1]);
			index++;
			b++;
			size--;
		}
		if (size == 0)
		{
			printf("      ");
			printf("      ");
		}
		for (j = 1; j < 11 && j < i; j++)
		{
			if ((buffer[j - 1] - '0') >= 32)
				printf("%c", buffer[j - 1]);
			else
				printf(".");
		}
		printf("\n");
	}
}
