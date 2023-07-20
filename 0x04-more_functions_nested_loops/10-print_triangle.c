#include "main.h"

/**
 *print_triangle - function print #
 *
 *@size: input
 *
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
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
