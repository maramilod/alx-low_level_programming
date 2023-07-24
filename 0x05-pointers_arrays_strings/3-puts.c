#include "main.h"

/**
 * _puts - function print the string
 *
 * @str: pointer
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
