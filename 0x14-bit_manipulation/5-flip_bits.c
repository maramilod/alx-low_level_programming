#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: first num
 * @m: sec
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, i = 63, flip = 0;

	xor = n ^ m;
	while (i)
	{
		if (xor >> i & 1UL)
			flip++;
		i--;
	}
	if (xor >> 0UL & 1UL)
		flip++;
	return (flip);
}
