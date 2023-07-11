#include "main.h"

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 *
 * @size: man unsigned integer
 * @c: a character
 *
 * Return:
 *	a pointer to the array 
 *	NULL if size = 0, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *the_array_of_chars;
	int i = 0;

	if (size <= 0)
		return (NULL);

	the_arrey_of_chars = (char*) malloc(size * sizeof(char));

	if (the_arrey_of_chars == NULL)
		return (NULL);

	while (i <= size)
	{
		the_arrey_of_chars[i] = c;
		i++
	}

	return (the_arrey_of_chars);
	free(the_arrey_of_chars);
}
