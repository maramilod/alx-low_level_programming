#include "main.h"
/**
 * int is_prime_number - function that returns the natural
 * square root of a number
 *
 * @n: number
 * Return: square
 */
int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	return (sqrtt(n, 1));
}
/**
 * sqrtt - function
 * @n: number
 * @i: number -_-
 * Return: result
 */

int sqrtt(int n, int i)
{
if (i * i < n)
return (sqrtt(n, i + 1));
		if (i * i > n)
		return (1);
		else
		return (0);
}
