#include "main.h"
/**
 * print_binary - function
 *
 * @n: numer
 */
void print_binary(unsigned long int n)
{
	int i, cou = 0;

	for (i = 63; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			cou = 1;
		}
		else if (cou == 1)
			_putchar('0');
	}
	if (!cou)
		_putchar(cou);
}
