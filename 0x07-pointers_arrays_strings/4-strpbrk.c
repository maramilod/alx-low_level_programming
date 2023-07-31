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
	int z = 0;

	while (s[i] != 32)
	{
		j = 0;
		while (accept[z])
		{
			if (s[i] == accept[z])
				return (s + i);
			z++;
		}
		i++;
	}
	return (NULL);
}
