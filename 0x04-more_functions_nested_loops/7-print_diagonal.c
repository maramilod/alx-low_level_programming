#include "main.h"

/**
 * print_diagonal - function to print \ charcter
 *
 * @n:the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\n');
		for (j = 1; j <= n; j++)
			if (j != i)
				_putchar(' ');
			else
			{
				_putchar(92);
				break;
			}
	}
_putchar('\n');
}
