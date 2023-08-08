#include "main.h"
/**
 * _strr - function
 * @s: string
 * Return: lenght
 */
int _strr(char *s)
{
	int i, j = 0;

	while (s[i] != 0)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
		i++;
	}
	j++;
	printf("%d",j);
	return (j);
}
/**
 * **strtow - function
 * @str: string
 * Return: 0
 */
char **strtow(char *str)
{
	int j, a, b;
	char **ar;
	int i = 0;
	int c = 0;
	int d = 0;

	printf("%i\n",i);
	if (*str == 0 || str == NULL)
		return (NULL);
	c = _strr(str);
	if (c == 1)
		return (NULL);
	ar = (char **)malloc(c * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	ar[c - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - b] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			ar[d] = (char *)malloc(1 + j * sizeof(char));
			j--;
			if (ar[d] == NULL)
			{
				for (a = 0; a < d; a++)
					free(ar[a]);
				free(ar[c - 1]);
				free(ar);
				return (NULL);
			}
			for (b = 0; b < j; b++)
				ar[d][b] = str[i + b];
			ar[d][b] = '\0';
			d++;
			i += j;
		}
		else
			i++;
	}
	return (ar);
}
