#include "main.h"
/**
 * _strlen - function
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
/**
 * *argstostr - function
 * @ac: number
 * @av: pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *ar;
	int j = 0;
	int x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		i += _strlen(av[j]);
		j++;
	}
	ar = malloc(sizeof(char) * i + 1);
		if (!ar)
		{
			return (NULL);
		}
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				ar[x] = av[i][j];
				x++;
				j++;
			}
			ar[x] = '\n';
			i++;
		}
		ar[x] = '\0';
		return (ar);
}
