#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - counts how many words in a string
 *
 * @s: string to manipulate
 *
 * Return: a pointer to a string
 *	or NULL if string is empty
 */

char *count_words(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
