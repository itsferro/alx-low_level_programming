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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) 
	{
		i++;
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
