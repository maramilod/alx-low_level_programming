#include "main.h"
/**
 * *malloc_checked - function
 * @b: amount of memory :)
 * Return: 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
