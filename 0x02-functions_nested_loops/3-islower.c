#include "main.h"

/**
 * _islower - checks if the letter is lowercase oer not
 *
 * @c: a parameter that contains the letter
 *
 * Return: 1 if the letter is lowercase
 *	and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
