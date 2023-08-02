#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 *
 * @n: number
 * Return: square
 */
int _sqrt_recursion(int n)
{
	return (sqrtt(n, 1));
}
/**
 * sqrtt - function
 * @n: number
 * Return: result
 */

int sqrtt(int n, int i)
{
if (i * i < n)
return (sqrtt(n, i + 1));
		if (i * i > n)
		return (-1);
		else
		return (i);
}
