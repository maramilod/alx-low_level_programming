#include "main.h"
/**
 * *_stract - function concatenates two strings
 *
 * @dest: array 1
 * @src: array 2
 *
 * Return: the concatenate
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

