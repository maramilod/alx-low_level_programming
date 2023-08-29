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

	if (!head || *head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (*head);
	}

	for (i = 0; i < index - 1; i++)
	{
		a = a->next;
	}

