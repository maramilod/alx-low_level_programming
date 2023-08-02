#include "main.h"
/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: result
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (*s1)
	{
		if (*s1 == *s2 || *s2 == '*')
			i += wildcmp(s1 + 1, s2 + 1) + 1;
		if (*s1 != *s2 && *s2 != '*')
			i = 0;
	}
	if (i == 0)
		return (i);
	else
		return (1);
}
