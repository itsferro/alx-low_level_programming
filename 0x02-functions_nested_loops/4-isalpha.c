#include "main.h"

/**
 * _isalpha - checks if the character is alphabet character
 *
 * @c: a parameter that contains the character
 *
 * Return: 1 if it is an alphabet character
 *	and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' )
		return (1);
	else
		return (0);
}
