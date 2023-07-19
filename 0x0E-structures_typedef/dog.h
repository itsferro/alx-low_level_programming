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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

void free_dog(dog_t *d);

#endif /*the end of #ifndef DOG_H*/
