#include "main.h"
/**
 * set_bit -  function that sets the value of a bit
 * to 0 at a given index
 *
 * @n: the value
 * @index: index
 * Return: 1 on success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	*n = *n | i << index;
	return (1);
}
