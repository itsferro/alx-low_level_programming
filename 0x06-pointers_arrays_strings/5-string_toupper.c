#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: a string
 *
 * Return: the address or s
 */
char *string_toupper(char *s)
{
	char *ptr;
	int i;

	ptr = s;
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		i++;
		s++;
	}

	return (ptr);
}
