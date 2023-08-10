#include "main.h"
/**
 * _realloc - function
 * @old_size: int
 * @new_size: int
 * @ptr: oid
 * Return: null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *) ptr)[i];
	free(ptr);
	return (p);
}
