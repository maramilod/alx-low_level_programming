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

	while (src[i + 1] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
