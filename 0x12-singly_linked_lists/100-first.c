#include "lists.h"
#include <stdio.h>

/**
 * my_init_function - prints before the main function is executed.
 *
 * Return: void.
 */
void __attribute__((constructor)) my_init_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
