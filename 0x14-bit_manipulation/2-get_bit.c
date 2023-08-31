#include "main.h"
/**
 * get_bit - function
 *
 * @n: number
 * @index: place
 *
 * Return: 0 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (n >> index & 1)
		return (1);
	else if (n >> index ^ 0)
		return (0);
	return (-1);
}
