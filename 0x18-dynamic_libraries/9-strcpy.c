#include "main.h"
/**
 * *_strcpy - function copies the string
 *
 * @dest: string pointir
 * @src: string pointer
 * Return:return pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
