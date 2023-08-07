#include "main.h"
/**
 * **alloc_grid - function
 * @width: column
 * @height: row
 * Return: null or ar
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		ar[i] = malloc(sizeof(int) * width);
	if (!ar)
		return (NULL);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	 for (i = 0; i < height; i++)
		 free(ar[i]);
	 free(ar);
	return (ar);
}
