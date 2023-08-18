#include "list.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element in the linkedlist
 * Return: the address of the new element in the test app
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *no;
	dlistint_t *h;

	no = malloc(sizeof(dlistint_t));
	if (no == NULL)
		return (NULL);

	no->n = n;
	no->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	no->next = h;

	if (h != NULL)
		h->prev = no;

	*head = no;

	return (no);
}
