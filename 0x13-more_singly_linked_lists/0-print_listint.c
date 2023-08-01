#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to listint_t.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		count++;
		printf("%d\n", p->n);
		p = p->next;
	}

	return (count);
}
