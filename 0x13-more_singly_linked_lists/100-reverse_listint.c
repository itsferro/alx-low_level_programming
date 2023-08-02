#include "lists.h"

/**
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}

	*head = temp;
	return (*head);
}
