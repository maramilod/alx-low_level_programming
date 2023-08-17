#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function
 * @s: string
 * Return: lenght
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
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
	int j, x, l;

	if (separator != NULL)
		l = _strlen(separator);

	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(arg, int);
		printf("%d", x);
		if (separator != NULL)
			for (j = 0; j < l; j++)
			{
				printf("%c", separator[j]);
			}
	}
	x = va_arg(arg, int);
	printf("%d\n", x);
}
