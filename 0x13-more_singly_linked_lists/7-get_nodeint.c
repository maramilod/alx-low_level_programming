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

	for (i = 0; i < index && head; i++)
		head = head->next;
	if (!head || i != index)
		return (NULL);
	h = head;
	return (h);
}
