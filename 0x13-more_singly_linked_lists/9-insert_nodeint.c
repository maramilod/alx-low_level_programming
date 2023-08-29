#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 *
 * @head: list
 * @idx: where
 * @n: the new value
 * Return: -__-
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fh, *t;
	unsigned int i;

	t = *head;
	fh = malloc(sizeof(listint_t));
	if (!fh || !head)
		return (NULL);
	if (head && fh)
	{
		fh->n = n;
		fh->next = NULL;
		if (idx == 0)
		{
			fh->next = *head;
			*head = fh;
			return (fh);
		}
		for (i = 0; i < (idx - 1) && t; i++)
		{
			t = t->next;
		}
		if (i == (idx - 1))
		{
			fh->next = t->next;
			t->next = fh;
			return (fh);
		}
	}
	free(fh);
	return (NULL);
}

