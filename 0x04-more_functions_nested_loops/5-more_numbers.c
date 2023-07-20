#include "main.h"
/**
 *more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void)
{
	int i, j, sum;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			sum = j;
			if (j >= 10)
			{
				sum = j % 10;
				_putchar(j / 10 + 48);
			}
			_putchar(sum + 48);
		}
		_putchar('\n');
}
}
