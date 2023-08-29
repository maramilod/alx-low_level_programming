#include "lists.h"
/**
 * free_listint_safe - function
 * @h : list
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	siz_t i = 0;
	int j;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h;
		j -= (*h)->next;
		if (j > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			*h = NULL;
			return (i);
		}
	}
	*h = NULL;
	return (i);
}

