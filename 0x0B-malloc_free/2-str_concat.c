#include "main.h"
/**
 * *str_concat - function
 * @s1: pointer
 * @s2: pointer 2
 * Return: null or ar
 */
char *str_concat(char *s1, char *s2)
{
	int x, i = 0;
	int j = 0;
	char *ar;

	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ar = malloc(sizeof(char) * (i + j + 1));
	if (!ar)
		return (NULL);
	for (x = 0; x <= i; x++)
		ar[x] = s1[x];
	for (i = 0; i <= j; i++)
	{
		ar[x] = s2[i];
		x++;
	}
	return (ar);
}
