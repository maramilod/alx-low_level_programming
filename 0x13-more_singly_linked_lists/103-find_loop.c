#include "lists.h"
/**
 * find_listint_loop - function
 *
 * @head: lala
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = NULL;

	while (head)
	{
		head = head->next;
	}
	return (a);
}
