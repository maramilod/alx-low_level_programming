#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x;
	char c;

	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(arg, int);
		if (separator[0])
		{
			c = separator[0];
			printf("%d%c ", x, c);
		}
		else
			printf("%d ", x);
	}
	x = va_arg(arg, int);
	printf("%d\n", x);
}
