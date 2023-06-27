#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 *
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
