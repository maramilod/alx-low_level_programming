#include "lists.h"
/**
 * reverse_listint - function
 *
 * @head: list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *a;

	if (!head || !*head)
		return (NULL);
	a = *head;
	*head = NULL;
	while (a != NULL)
	{
		next = a->next;
		a->next = *head;
		*head = a;
		a = next;
	}
	return (*head);
}
