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
	if (index > 63)
		return (-1);
	if (n == 0)
		return (0);
	if (n >> index & 1)
		return (1);
	else
		return (0);
}
