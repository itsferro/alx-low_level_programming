#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 *
 * @head: a pointer to a list_t list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
