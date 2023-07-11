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
 * _strdup - returns a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter.
 *
 * @str: a string
 *
 * Return:
 *	a pointer to a new string which is a duplicate of the string str
 *	Returns NULL if str = NULL
 *	returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int string_length;
	char *new_string;
	int i = 0;

	if (str == NULL)
		return (NULL);

	string_length = _strlen(str);

	if (string_length == 0)
		return (NULL);

	new_string = (char *) malloc(string_length * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	while (i < string_length)
	{
		new_string[i] = str[i];
		i++;
	}
	return (new_string);
}
