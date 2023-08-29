#include "lists.h"
/**
 * loop - function
 * @head: list
 * Return: i
 */
size_t loop(const listint_t *head)
{
	const listint_t *t, *a;
	size_t i = 1;

	if (!head || head->next == NULL)
		return (0);
	t = head->next;
	a = (head->next)->next;
	while (a)
	{
		if (t == a)
		{
			t = head;
			while (t != a)
			{
				i++;
				t = t->next;
				a = a->next;
			}
			t = t->next;
			while (t != a)
			{
				i++;
				t = t->next;
			}
			return (i);
		}
		t = t->next;
		a = (a->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function
 * @head: list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i;

	n = loop(head);
	if (n == 0)
	{
		while (head)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			head = head->next;
			n++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
