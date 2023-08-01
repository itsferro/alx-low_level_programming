#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: a pointer of type listint_t.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL)
		return;

	current_node = *head;
	*head = NULL;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
