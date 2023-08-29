#include "lists.h"
/**
 * get_nodeint_at_index - function that return
 * the nth node
 *
 * @head: list
 * @index: the nth
 * Return: if the node doesn't exist return
 * null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *h;

	if (head)
		for (i = 0; i < index; i++)
			head = head->next;
	if (!head)
		return (NULL);
	h = head;
	return (h);
}
