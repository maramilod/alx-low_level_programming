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

	do{
		dest[i] = src[i];
		i++;
	} while (src[i] != 0);

	return (dest);
}
