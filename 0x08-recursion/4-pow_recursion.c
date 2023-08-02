#include "main.h"
/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 *
 * @x: value
 * @y: power
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int i = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
	return (1);
	else
		i *= _pow_recursion(x, --y) * x;
	return (i);
}
