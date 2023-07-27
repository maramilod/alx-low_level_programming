#include "main.h"
/**
 * *leet - function that encodes a string
 *
 * Description: string
 * @s: array
 * Return: return str
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 52;
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = 51;
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = 48;
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = 55;
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = 49;
		i++;
	}
	return (s);
}
