#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: a constant pointer of type list_t.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (count);
}
