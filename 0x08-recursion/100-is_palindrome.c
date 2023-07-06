#include "main.h"
#include <stdio.h>

void print_c(char *c, int i)
{
	while (i >= 0)
	{
		printf("%c", *c);
		i++;
		c++;
	}
}

/**
 * the_end_of_s - gets the last character of the string
 *
 * @len: a string
 *
 * Return: a string
 */
char *the_end_of_s(char *len, int i)
{
	if (*len == '\0')
	{
		return (0);
		print_c(len, i);
	}

	i++;
	len++;
	return (the_end_of_s(len));
}

/**
 * is_it_really - checks if the string is a palindrome or not
 *
 * @s: a string
 * @c: a string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_it_really(char *s, char *c)
{
	/*if (*s != *c || *s == '\0')*/
	/*	return (0);*/

	/*s++;*/
	/*c--;*/
	/*return (is_it_really(s, c));*/
	if (s >= c)
		return (1);
	if (*s == *c)
	{
		printf("%c, %c", *s, *c);
		s++;
		c--;
		return (is_it_really(s, c));
	}

	return (0);
}

/**
 * is_palindrome - checks if the string is a palindrome or not
 *
 * @s: a string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	char *c = the_end_of_s(s, i);

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	return (is_it_really(s, c));
}
