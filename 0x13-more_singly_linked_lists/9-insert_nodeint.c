#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to a linked list pointer.
 * @idx: an unsigned integer refers to the node index.
 * @n: an integer as a node data.
 *
 * Return:the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		current_node = get_nodeint_at_index(*head, idx);
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = current_node;
		*head = new_node;
	}
	else if (idx == 0)
	{
		current_node = get_nodeint_at_index(*head, idx);
		if (current_node == NULL)
			return (NULL);
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = current_node;
		*head = new_node;
	}
	else
	{
		current_node = get_nodeint_at_index(*head, idx - 1);
		if (current_node == NULL)
			return (NULL);
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
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
