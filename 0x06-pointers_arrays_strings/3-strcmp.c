#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: a string
 * @s2: a string
 *
 * Return: -15 if s1 Lexicographically less than s2
 *	15 if s1 Lexicographically greater than s2
 *	0 if s1 and s2 are Lexicographically equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	if (s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
