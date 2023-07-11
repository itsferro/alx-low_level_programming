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
	i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: a string
 * @s2: a string
 *
 * Return:
 *	returns a pointer to a newly allocated space in memory
 *	(which contains the contents of s1,
 *	followed by the contents of s2,
 *	and null terminated)
 *	return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	char *new_string;
	int i, n;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	new_string = (char *) malloc((s1_len + s2_len) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		new_string[i] = s1[i];
	}
	for (i = 0; i < s1_len; i++)
	{
		n = i + (s1_len - 1);
		new_string[n] = s2[i];
	}

	return (new_string);
}
