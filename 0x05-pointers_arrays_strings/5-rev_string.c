#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: pointer
 * _putchar: output
 */
void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
		j++;
	}
}
