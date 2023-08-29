#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * @head:list
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *a, *b;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
		return (1);
	}
	a = *head;
	for (i = 0; i < index && a; i++)
	{
		b = a;
		a = a->next;
	}
	if (i == index)
	{
		b->next = a->next;
		free(a);
		return (1);
	}
	return (-1);
}
