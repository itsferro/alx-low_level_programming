#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *	and returns the head node’s data (n).
 *
 * @head: a pointer to a linked list.
 *
 * Return:
 *	the head node’s data (n).
 *	if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	d = *head->n;
	temp = *head;
	*head = temp->next;

	free(temp);
	return (d);
}
