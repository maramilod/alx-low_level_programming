#include "main.h"
/**
 * *_calloc - function
 * @nmemb: int 1
 * @size: int 2
 * Return: null or p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 48;
	return (p);
}
