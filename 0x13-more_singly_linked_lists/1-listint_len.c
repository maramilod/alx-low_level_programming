#include "lists.h"
/**
 * listint_len - function return number
 * of elements
 *
 * @h: header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
