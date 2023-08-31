#include "main.h"
/**
 * print_binary - function
 *
 * @n: numer
 */
void print_binary(unsigned long int n)
{
	unsigned int num;
	int i, cou = 0;

	if (!n)
		return;
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			cou = 1;
		}
		else if (cou == 1)
			_putchar('0');
	}
	if (!cou)
		_putchar(count);
}
