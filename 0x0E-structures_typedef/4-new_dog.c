#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 *
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: a string holdes the name of the dog.
 * @age: a float holdes the age of the dog.
 * @owner: a dtring holdes the name of the owner of the dog
 *
 * Return:
 *	a pointer to the struct.
 *	NULL on fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *n, *o;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	n = _strcpy(NULL, name);
	o = _strcpy(NULL, owner);

	dog->name = n != NULL ? n : "(nil)";
	dog->age = age;
	dog->owner = o != NULL ? o : "(nil)";

	return (dog);
}
