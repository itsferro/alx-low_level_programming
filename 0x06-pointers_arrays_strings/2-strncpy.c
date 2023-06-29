#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: a string
 * @src: a string
 * @n: an integer
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_length, i;

	while (*dest != '\0')
	{
		dest_length++;
		dest++;
	}

	dest -= dest_length;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	for (; i < dest_length; i++)
		dest[i] = '\0';

	return dest;
}
