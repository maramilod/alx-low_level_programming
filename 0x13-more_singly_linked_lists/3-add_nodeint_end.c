#include "lists.h"
/**
 * add_nodeint_end - function that adds
 * a node at the end
 *
 * @head: header
 * @n: number
 * Return: the address the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *h = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp || !head)
		return (NULL);
	temp->n = n;
	if (*head)
	{
		while (h->next)
			h = h->next;
		h->next = temp;
	}
	else
		*head = temp;
	return (*head);
}
