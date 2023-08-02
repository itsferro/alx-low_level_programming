#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index (index)
 *	of a listint_t linked list.
 *
 * @head: a pointer to a linked list pointer.
 * @index: the index of the node that will be deleted.
 *
 * Return:
 *	1 if it succeeded.
 *	-1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete_node, *previous_node;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		delete_node = get_nodeint_at_index(*head, index);
		if (delete_node == NULL)
			return (-1);
		*head = delete_node->next;
		free(delete_node);
	}
	else
	{
		previous_node = get_nodeint_at_index(*head, (index - 1));
		if (previous_node == NULL)
			return (-1);
		delete_node = previous_node->next;
		if (delete_node == NULL)
			previous_node->next = NULL;
		else
			previous_node->next = delete_node->next;
		free(delete_node);
	}

	return (1);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: a pointer to the linked list.
 * @index: an unsigned int refers to the node index.
 *
 * Return:
 *	the node address.
 *	if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
