#include "main.h"
/* #include <stdio.h> */

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

	dest_length = 0;
	/* printf("\n%p the address of dest before counting\n", dest); */
	while (*dest != '\0')
	{
		dest_length++;
		dest++;
		/**
		 * printf("%d the value of the last dest_length counter\n", dest_length);
		 * printf("%p the address of dest throgh counting\n", dest);
		 */
	}
	/**
	 * printf("\n%d the value of the last dest element\n", *dest);
	 * printf("\n%p the address of dest after counting\n", dest);
	 */

	dest -= dest_length;
	/* printf("\n%p the address of dest after dest -= dest_length;\n", dest); */

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	/*
	 * for (; i < dest_length; i++)
	 * dest[i] = '\0';
	 */

	return (dest);
}
