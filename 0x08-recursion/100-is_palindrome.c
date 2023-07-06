#include "main.h"

/**
 * the_end_of_s - gets the last character of the string
 *
 * @c: a string
 *
 * Return: a string
 */
char the_end_of_s(char *c)
{
	if (*c == '\0')
		return (c);

	c++;
	return (the_end_of_s(c));
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
	if (*s == *c && *s != '\0')
	{
		s++;
		c--;
		return (is_it_really(s, c));
	}
	else
	{
		return (0);
	}
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
	char *c = the_end_of_s(s);

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	return (is_it_really(s, c));
}
