#include "main.h"
/**
 * _atoi - function convert a string
 *
 * @b: the string
 * Return: number
 */
unsigned int _atoi(const char *b)
{
	unsigned int number = 0;

	do {
		if (*b == 48 || *b == 49)
			number = (number * 10) + (*b - 48);
		else if (*b != 48 && *b != 49 && *b != '\0')
			return (0);
		else if (number > 0)
			break;
	} while (*b++);
	return (number);
}
/**
 * binary_to_uint - function
 *
 * @b: binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n, binary, w = 1;

	binary = _atoi(b);

	while (binary)
	{
		n = binary % 10;
		sum += n * w;
		w *= 2;
		binary /= 10;
	}
	return (sum);
}
