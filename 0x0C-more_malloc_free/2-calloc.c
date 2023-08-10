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

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb);
	return (p);
}
