#include "main.h"
/**
 * *_strdup - function
 * @str: pointer
 * Return: null or ar
 */
char *_strdup(char *str)
{
	int j, i = 0;
	char *ar;

	while (str[i])
		i++;
	ar = malloc(sizeof(char) * i);
	if (!ar || !str)
		return (NULL);
	for (j = 0; j <= i; j++)
		ar[j] = str[j];
	return (ar);
}
