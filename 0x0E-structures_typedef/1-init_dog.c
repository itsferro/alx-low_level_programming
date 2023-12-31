#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: a pointer of type struct dog.
 * @name: a string holding the of the dog.
 * @age: a float holding the age of the dog.
 * @owner: a string holding the name of the owner of the dog.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->age = age;

	if (name != NULL)
		d->name = name;
	else
		d->name = NULL;

	if (owner != NULL)
		d->owner = owner;
	else
		d->owner = NULL;
}
