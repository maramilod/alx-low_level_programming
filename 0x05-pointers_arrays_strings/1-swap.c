#include "main.h"

/**
 * swap_int - function that swap the value
 * by using 'p'
 *
 * @a: value 1
 * @b: value 2
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

