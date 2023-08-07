#include "main.h"
/**
 * *create_array - function
 * @size: size of array
 * @c: char
 * Return: null or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = malloc(sizeof(char) * size);

	if (!ar)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
