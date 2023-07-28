#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: a pointer to a pointer points to a list_t list.
 * @str: a string needs to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;

	return (*head);
}
