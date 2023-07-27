#include "main.h"
/**
 * *_strncat - function concatenates two strings
 *
 * @dest: array 1
 * @src:array 2
 *
 * Return: Always return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
