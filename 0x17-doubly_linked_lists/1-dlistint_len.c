#include "lists.h"

/**
 * dlistint_len - returns the number
 * @h: head
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int co;

	co = 0;

	if (h == NULL)
		return (co);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		co++;
		h = h->next;
	}

	return (co);
}
