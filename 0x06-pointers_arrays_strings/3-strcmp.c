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
	int i, return_value;

	rtrn_value = 0;

	while (*s1 != '\0' && *s2 != '\0' && return_value == 0)
	{
		if (s1[i] > s2[i])
		{
			rtrn_value = 15;
		}
		else if (s1[i] < s2[i])
		{
			rtrn_value = -15;
		}
		s1++;
		s2++;
	}

	if (rtrn_value > 0)
	{
		return (15);
	}
	else if (return_value < 0)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
