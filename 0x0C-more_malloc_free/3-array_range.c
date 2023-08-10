#include "main.h"
/**
 * *array_range - function
 * @min: int 1
 * @max: int
 * Return: null
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;
	int n;

	if (max < min)
		return (NULL);
	n = max - min;
	p = malloc(sizeof(int) * n + 1);
	if (p == NULL)
		return (NULL);
	while (i <= n)
	{
		p[i] = i;
		i++;
	}
	return (p);
}
