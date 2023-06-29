#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: a string
 * @src: a string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length, int src_length, int i;

	dest_length = 0;
	src_length = 0;
	i = 0;

	while (dest_length != '\0')
		dest_length++;

	while (src_length != '\0')
		src_length++;

	for (; i <= src_length, i++)
		*(dest + (dest_length + i)) = *(src + i);

	*(dest + (dest_length + i)) = '\0';

	return (dest);
}
