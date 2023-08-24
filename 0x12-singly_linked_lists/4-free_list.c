#include "lists.h"
/**
 * free_list - function frees the list
 *
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *f, *s;

	if (!head)
		return;
	s = head;
	while (head)
	{
		f = head->next;
		free(s->str);
		free(s);
		s = f;
	}
}
