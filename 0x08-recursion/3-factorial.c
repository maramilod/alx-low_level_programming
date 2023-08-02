#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: the given number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n)
		return (n * factorial(n - 1));
	else
		return (1);
}
