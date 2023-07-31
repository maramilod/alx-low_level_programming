#include "main.h"

/**
 * *_strchr - Returns a pointer to the first
 * occurrence of the character c
 *
 * @s: array
 * @c: character
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
