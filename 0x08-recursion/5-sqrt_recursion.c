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
	int i = 1;

	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else if (i * i != n)
	{
		i = _sqrt_recursion(n) - 1;
		return (i);
	}
	return (i);
}
