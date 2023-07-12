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
		i++;
		s++;
	}
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: an integer holds the arguments number
 * @av: a string holds the arguments
 *
 * Return:
 *	a pointer to a new string
 *	NULL if ac == 0 or av == NULL
 *	NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
