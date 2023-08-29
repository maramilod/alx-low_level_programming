#include "lists.h"
/**
 * free_listint_safe - function
 * @h : list
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int j;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 1 || j == 1)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			i++;
		}
		if (j <= 0)
		{
			free(*h);
			*h = NULL;
			++i;
			return (i);
		}
	}
	*h = NULL;
	return (i);
}

