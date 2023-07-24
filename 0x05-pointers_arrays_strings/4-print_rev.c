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
	while (s[i] - 1 != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
