#include "main.h"
/**
 * reverse_array - function that reverses the
 * content of an array of integers
 *
 * @a: array
 * @n: integar
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n / 2)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
		i++;
	}
}
