#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: array
 * @accept: array
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != 32)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
