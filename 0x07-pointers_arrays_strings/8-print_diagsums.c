#include "main.h"
/**
 */
void print_diagsums(int *a, int size)
{
	int i;
	int m1 = 0;
	int m2 = 0;

	for (i = 0; i < size; i++)
	{
		m1 += a[i];
		m2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", m1);
	printf("%d\n", m2);
}
