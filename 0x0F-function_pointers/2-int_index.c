#include "function_pointers.h"
/**
 * int_index - function
 *
 * @array: array
 * @size: size
 * @cmp: function
 *
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
