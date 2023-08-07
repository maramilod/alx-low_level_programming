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

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i - 1));
	if (!ar || !str)
		return (NULL);
	for (j = 0; j <= i; j++)
		ar[j] = str[j];
	return (ar);
}
