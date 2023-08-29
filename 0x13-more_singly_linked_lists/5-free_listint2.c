#include "lists.h"
/**
 * free_listint2 - function sets the
 * head to NULL
 * @head: free list
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (!head)
		return;
	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	head = NULL;
}
