#include "lists.h"
/**
 * strlenn - function
 * @s: string
 * Return: lenght
 */
unsigned int strlenn(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		++i;

	return (i);
}
/**
 * *add_node_end - function that adds a new node
 * at the beginning of a list
 *
 * @head: beginning of the list
 * @str: new node
 * Return: the address iof thee new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *h;

	h = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL || head == NULL)
		return (NULL);
	if (str)
	{
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp);
			return (NULL);
		}
		temp->len = strlenn(str);
	}
	if (*head != NULL)
	{
		while (h->next)
			h = h->next;
		h->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
