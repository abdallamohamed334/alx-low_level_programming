#include "list.h"

/**
 * print_dlistint - prints all the elements of a
 * element
 *
 * @h: head of the doubly kibked list
 * Return: the count number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
