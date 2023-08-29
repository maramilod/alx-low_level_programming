#include "lists.h"
/**
 * sum_listint - sum of all data of the list
 *
 * @head: the list
 * Return: the sum or NULL
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
