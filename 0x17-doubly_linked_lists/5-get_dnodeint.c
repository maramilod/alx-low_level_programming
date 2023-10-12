#include "lists.h"

/**
 * get_dnodeint_at_index - returns
 * @head: h of list
 * @index: index of the node to search for
 * Return: node or null -_-
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *tmp;

	s = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == s)
	return (tmp);
	s++;
	tmp = tmp->next;
	}
	return (NULL);
}
