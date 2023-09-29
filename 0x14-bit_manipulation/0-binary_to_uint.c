#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a string.
 *
 * Return:
 *	the converted number.
 *	0 if:
 *		-there is one or more chars in the string b that is not 0 or 1.
 *		-b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, power = 1;
	unsigned int sum = 0, error = 0;

	if (b == NULL)
		return (error);

	len = (strlen(b)) - 1;

	while (len >= 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (error);

		if (b[len] == '1')
			sum += power;

		power *= 2;
		len--;
	}

	return (sum);
}
