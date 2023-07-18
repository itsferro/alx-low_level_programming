#include "dog.h"
#include <stdlib.h>

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

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
