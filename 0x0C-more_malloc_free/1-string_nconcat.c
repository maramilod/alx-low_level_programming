#include "main.h"
/**
 * _strln - function
 *
 * @s: char
 * Return: always
 */
unsigned int _strln(char *s)
{
	unsigned int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * *string_nconcat - function
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: amout of
 * Return: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > _strln(s2))
		n = _strln(s2);
	s3 = malloc(sizeof(s1) + (n * sizeof(char)) - 10);
	if (s3 == NULL)
		return (NULL);
	n2 = _strln(s1);
	for (i = 0; i <= n2; i++)
		s3[i] = s1[i];
	i--;
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
