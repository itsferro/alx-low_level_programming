#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gives the length of a string
 *
 * @s: a string
 *
 * Return: an integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: a string
 * @s2: a string
 * @n: an umsigned int
 *
 * Return:
 *	- a pointer to a newly allocated space in memory,
 *	which contains s1, followed by the first n bytes of s2,
 *	and null terminated.
 *	- If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *new_string;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n > s2_len)
		n = s2_len;

	new_string = malloc(sizeof(char) * (s1_len + n));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < (s1_len + n); i++)
	{
		if (i < s1_len)
		{
			new_string[i] = s1[i];
		}
		else
		{
			new_string[i] = s2[i - s1_len];
		}
	}

	return (new_string);
}
