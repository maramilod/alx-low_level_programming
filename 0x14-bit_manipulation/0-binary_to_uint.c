#include "main.h"
/**
 * binary_to_uint - function
 *
 * @b: binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n = 0;

	if (b == NULL)
		return (sum);
	while (b[n])
	{
		if (b[n] != 48 && b[n] != 49)
			return (0);
		sum = 2 * sum + (b[n] - '0');
		n++;
	}
	return (sum);
}
