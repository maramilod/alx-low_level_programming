#include "main.h"
/**
 * *_memcpy - function copies n bytes from memory area src
 *
 * @dest: array 1
 * @src: array 2
 * @n: num of ti
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
