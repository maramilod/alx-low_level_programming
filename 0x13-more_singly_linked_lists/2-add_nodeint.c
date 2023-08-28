#include "lists.h"
/**
 * add_nodeint - function adds a new
 * node at beginning
 *
 * @head: the beginning
 * @n: number
 * Return: return the addres of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp || !head)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
