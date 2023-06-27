#include "main.h"

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
	int l, i;

	l = 0;
	while (*src != '\0')
	{
		l++;
		src++;
	}
	i = 0;
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
