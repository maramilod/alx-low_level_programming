#include "lists.h"
/**
 * free_list - function frees the list
 *
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *f;

	if (!head)
		return;
	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
