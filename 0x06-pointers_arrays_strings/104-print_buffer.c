#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_hex - prints the hexadecimal content (2 chars)
 * of the buffer, 2 bytes at a time, separated by a space.
 *
 * @i: the index.
 * @hex: the number.
 *
 * Return: void.
 */
void print_hex(int i, int hex)
{
	if (i % 2 != 0)
		printf("%02x", hex);
	else
		printf("%02x ", hex);
}

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
	int i, j, padding, index = 0;

	if (size > 0)
	{
		while (size > 0)
		{
			printf("%08x: ", index);
			for (i = 1; i < 11 && size > 0; i++)
			{
				buffer[i - 1] = *b;
				print_hex(i, buffer[i - 1]);
				index++;
				b++;
				size--;
			}
			if (size == 0)
			{
				for (padding = i; padding < 11; padding++)
				{
					if (padding % 2 != 0)
						printf("  ");
					else
						printf("   ");
				}
			}
			for (j = 1; j < 11 && j < i; j++)
			{
				if (buffer[j - 1] >= 32)
					printf("%c", buffer[j - 1]);
				else
					printf(".");
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
