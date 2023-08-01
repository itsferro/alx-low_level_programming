#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: a pointer of type listint_t.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
