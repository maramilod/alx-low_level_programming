#include "main.h"
/**
 *
 *
 *
 *
 *
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	       for (j = size; j > 0; j--)
		       if (j > i)
			       _putchar(' ');
		       else
			       _putchar('#');
	_putchar('\n');
	}
}
