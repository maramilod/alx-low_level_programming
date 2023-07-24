#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	i--;
	while (s[i] != s[-1])
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
