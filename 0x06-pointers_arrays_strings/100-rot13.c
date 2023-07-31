#include "main.h"

/**
 * *rot13 - function
 *
 * @s: pointer
 *
 * Return: p
 */
char *rot13(char *s)
{
	int i;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char A[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == a[i])
			{
				*s = A[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
