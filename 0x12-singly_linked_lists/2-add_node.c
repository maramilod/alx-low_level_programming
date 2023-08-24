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
 * *add_node - function that adds a new node
 * at the beginning of a list
 *
 * @head: beginning of the list
 * @str: new node
 * Return: the address of thee new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

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
	temp->next = *head;
	*head = temp;

	return (*head);
}
