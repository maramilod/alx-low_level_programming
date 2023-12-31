#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit
 * to 0 at a given index
 *
 * @n: the value
 * @index: index
 * Return: 1 on success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
