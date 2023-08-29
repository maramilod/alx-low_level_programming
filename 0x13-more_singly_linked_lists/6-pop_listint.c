#include "lists.h"
/**
 * pop_listint - function that deletes the
 * head node of the list
 *
 * @head: list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *h;

	if (*head && head)
	{
		ret = (*head)->n;
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	return (ret);
}
