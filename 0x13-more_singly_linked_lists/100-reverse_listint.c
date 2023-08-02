#include "lists.h"

/**
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	next = (*head)->next;
	*head = next;
	next->next = temp;
	temp->next = NULL;

	while ((*head)->next != NULL)
	{
		temp = *head;
		next = (*head)->next;
		*head = next;
		next->next = temp;
	}
	(*head)->next = temp;

	return (*head);
}
