#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type for dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 *
 * Description: a structure data type
 *		holding the dog information.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /*the end of #ifndef DOG_H*/
