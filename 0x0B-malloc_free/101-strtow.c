#include "main.h"
/**
 * _strr - function
 * @s: string
 * Return: lenght
 */
int _strr(char *s)
{
	int j = 0;
	int i = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}
/**
 *co - function
 *@str: value
 *Return: always
 */

int co(char *str)
{
	int i = 0;
	int w = 0;
	int l = 0;

	for (i = 0; *(str + i); i++)
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += _strr(str + i);
		}
	}
	return (w);
}
/**
 * **strtow - function
 * @str: string
 * Return: 0
 */
char **strtow(char *str)
{
	int wa, y, le, l;
	char **ar;
	int i = 0;

	if (*str == 0 || str == NULL)
		return (NULL);
	wa = co(str);
	if (wa == 0)
		return (NULL);
	ar = malloc((wa + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	for (y = 0; y < wa; y++)
	{
		while (str[i] == ' ')
			i++;

		le = _strr(str + i);

		ar[y] = malloc(sizeof(char) * (le + 1));

		if (ar[y] == NULL)
		{
			for (; y >= 0; y--)
				free(ar[y]);
			free(ar);
			return (NULL);
		}
			for (l = 0; l < le; l++)
				ar[y][l] = str[i++];
			ar[y][l] = '\0';
	}
	ar[y] = NULL;
	return (ar);
}
