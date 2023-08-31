#include "main.h"
/**
 * print_binary - function
 *
 * @n: numer
 */
void print_binary(unsigned long int n)
{
	int i = 0, count = 0;

	if (!n)
		return;
	for (i = 32; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
			_putchar('0');
	}
	if (!count)
		_putchar(count);
}
