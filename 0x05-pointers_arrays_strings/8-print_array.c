#include "main.h"
/**
 * print_array - function print elements
 *
 * @a: pointer
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
