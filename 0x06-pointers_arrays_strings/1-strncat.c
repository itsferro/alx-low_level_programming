#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: a string
 * @src: a string
 * @n: an integer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_length, i;
	char *ptr;

	dest_length = 0;
	src_length = 0;
	ptr = dest;

	while (*dest != '\0')
	{
		dest_length++;
		dest++;
	}

	dest -= dest_length;

	while (*src != '\0')
	{
		src_length++;
		src++;
	}

	src -= src_length;

	for (i = 0; i < n && i < src_length; i++)
	{
		*(dest + dest_length + i) = *(src + i);
	}

	*(dest + dest_length + i) = '\0';

	return (ptr);
}

